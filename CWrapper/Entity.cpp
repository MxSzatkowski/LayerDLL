//Entity.cpp
#include "Entity.h"
namespace CLI
{
    Entity::Entity()
        : ManagedObject(new Core::Entity())
    {
    }
    float Entity::add(float a, float b)
    {
        m_Instance->add(a, b);
        return a + b;
        
    }
}