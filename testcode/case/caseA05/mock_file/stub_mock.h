
// clang-format off
#pragma once
#include "mock_lib.h"
#include "mock_include.h"



BEGIN_UC()
END_UC()



namespace UT
{



BEGIN_MOCK()
_MOCK_getLevel
_MOCK_PrintLevel
_MOCK_Cleanup
END_MOCK()


#include "stub_mock_imp.h"
}// namespace UT

