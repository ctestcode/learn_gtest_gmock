
// clang-format off
#pragma once
#include "mock_lib.h"
#include "mock_include.h"




BEGIN_UC()
_DECL_strcpy;
_REAL_strcpy;
END_UC()



namespace UT
{


BEGIN_MOCK()
_MOCK_CheckABC
END_MOCK()


#include "stub_mock_imp.h"
}// namespace UT

