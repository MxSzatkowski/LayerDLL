//Entity.h
#pragma once
#include "ManagedObject.h"
#include "../Core/Core.h"
using namespace System;
namespace CLI
{
    public ref class Entity : public ManagedObject<Core::Entity>
    {
    public:
        Entity();
        float add(float a, float b);
       
        property float A
        {
        public:
            float get()
            {
                return m_Instance->GetA();
            }
        private:
            void set(float value)
            {
            }
        }
        property float B
        {
        public:
            float get()
            {   
                return m_Instance->GetB();
            }
        private:
            void set(float value)
            {
            }
        }
        property float Result
        {
        public:
            float get()
            {
                return m_Instance->add(A,B);
            }
        private:
            void set(float value)
            {
            }
        }
    };
}