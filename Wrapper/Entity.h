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

        Entity(String^ name, float xPos, float yPos, float a, float b, float result);
        void Move(float deltaX, float deltaY);
        float add(float a, float b);
        property float XPosition
        {
        public:
            float get()
            {
                return m_Instance->GetXPosition();
            }
        private:
            void set(float value)
            {
            }
        }
        property float YPosition
        {
        public:
            float get()
            {
                return m_Instance->GetYPosition();
            }
        private:
            void set(float value)
            {
            }
        }
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