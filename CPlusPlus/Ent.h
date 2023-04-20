#pragma once

#include "../Core/Entity.h"		// needed for EXAMPLEUNMANAGEDDLL_API

#ifndef __ExampleUnmanagedDLL_h__
#define __ExampleUnmanagedDLL_h__

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the EXAMPLEUNMANAGEDDLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// EXAMPLEUNMANAGEDDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EXAMPLEUNMANAGEDDLL_EXPORTS
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllexport)
#else
#define EXAMPLEUNMANAGEDDLL_API __declspec(dllimport)
#endif

class EXAMPLEUNMANAGEDDLL_API Ent : public Core::Entity
{
	



};

#endif	// __ExampleUnmanagedDLL_h__