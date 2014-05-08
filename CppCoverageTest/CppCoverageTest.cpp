// CppCoverageTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <tchar.h>

#include "Tools/Log.hpp"

//-----------------------------------------------------------------------------
int _tmain(int argc, _TCHAR* argv[])
{
	Tools::EnableLogger(false);
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}

