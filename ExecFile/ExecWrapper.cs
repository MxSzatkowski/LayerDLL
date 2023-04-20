using System;
using System.Collections.Generic;
using System.Text;
using Wrapper;
using CLI;

namespace ExecFile
{
    public class ExecWrapper
    {
        public float UseWrapperMethod()
        {
            var wrap = new Ent();
            return wrap.Add(10,22);
        }

        public float UseCPPWrapperMethod()
        {
            Entity wrap = new Entity();
            return wrap.add(10, 20);

        }

    }
}
