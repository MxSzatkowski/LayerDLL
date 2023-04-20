#ifndef __TestClassCallers_h__
#define __TestClassCallers_h__

#include "Ent.h"		// needed for EXAMPLEUNMANAGEDDLL_API

#ifdef __cplusplus
extern "C" {
#endif

	extern EXAMPLEUNMANAGEDDLL_API Ent* CreateTestClass();
	extern EXAMPLEUNMANAGEDDLL_API void DisposeTestClass(Ent* pObject);

	extern EXAMPLEUNMANAGEDDLL_API float CallAdd(Ent* pObject, float a, float b);

#ifdef __cplusplus
}
#endif

#endif // __TestClassCallers_h__
