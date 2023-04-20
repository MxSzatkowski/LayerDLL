
//Entity.cpp
#include "Entity.h"
#include <iostream>
namespace Core
{
    Entity::Entity()
    {
    }
    float Entity::add(float a, float b)
    {
        m_A = a;
        m_B = b;
        m_Result = m_B + m_A;
        std::cout << "Result of " << m_A << " + " << m_B << " is " << m_Result << std::endl;
        return a + b;
    }
}
