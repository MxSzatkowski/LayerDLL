#pragma once
//Entity.h
#pragma once
namespace Core
{
    class Entity
    {
    public:
        const char* m_Name;
    private:
        float m_A, m_B, m_Result;
    public:
        Entity();
        float add(float a, float b);
        inline float GetA() const { return m_A; };
        inline float GetB() const { return m_B; };
        inline float GetALL() const { return m_B + m_A; };
    };
}