//Entity.cpp
#include "Entity.h"
namespace CLI
{
    Entity::Entity(String^ name, float xPos, float yPos, float a, float b, float result)
        : ManagedObject(new Core::Entity(string_to_char_array(name), xPos, yPos, a, b, result))
    {
    }
    void Entity::Move(float deltaX, float deltaY)
    {
        Console::WriteLine("The Move method from the Wrapper was called!");
        m_Instance->Move(deltaX, deltaY);
    }
    float Entity::add(float a, float b)
    {
        m_Instance->add(a, b);
        return a + b;
        
    }

}