using System;
using System.Runtime.InteropServices;

namespace Wrapper
{
    public class Ent : IDisposable
    {
        public const string DllPath = @"..\..\..\..\x64\Debug\CPlusPlus.dll";

        [DllImport(DllPath, CallingConvention = CallingConvention.Cdecl)]
        static private extern IntPtr CreateTestClass();

        [DllImport(DllPath, CallingConvention = CallingConvention.Cdecl)]
        static private extern void DisposeTestClass(IntPtr pTestClassObject);

        [DllImport(DllPath, CallingConvention = CallingConvention.Cdecl)]

        static private extern float CallAdd(IntPtr pTestClassObject, float a, float b);

        #region Members
        private IntPtr m_pNativeObject;     // Variable to hold the C++ class's this pointer
        #endregion Members

        public Ent()
        {
            // We have to Create an instance of this class through an exported function
            this.m_pNativeObject = CreateTestClass();
        }
        public void Dispose()
        {
            Dispose(true);
        }

        protected virtual void Dispose(bool bDisposing)
        {
            if (this.m_pNativeObject != IntPtr.Zero)
            {
                // Call the DLL Export to dispose this class
                DisposeTestClass(this.m_pNativeObject);
                this.m_pNativeObject = IntPtr.Zero;
            }

            if (bDisposing)
            {
                // No need to call the finalizer since we've now cleaned
                // up the unmanaged memory
                GC.SuppressFinalize(this);
            }
        }
        ~Ent()
        {
            Dispose(false);
        }

        public float Add(float a, float b)
        {
            CallAdd(this.m_pNativeObject, a, b);
            return a + b;
        }
    }
}