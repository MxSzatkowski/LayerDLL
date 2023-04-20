#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <windows.h>

#include "TestClassCallers2.h"


extern "C" EXAMPLEUNMANAGEDDLL_API Ent * CreateTestClass()
{
	return new Ent();
}

extern "C" EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Ent * pObject)
{
	if (pObject != NULL)
	{
		delete pObject;
		pObject = NULL;
	}
}

extern "C" EXAMPLEUNMANAGEDDLL_API float CallAdd(Ent * pObject, float a, float b)
{
	if (pObject != NULL)
	{
		pObject->add(a, b);
		return a + b;
	}
}