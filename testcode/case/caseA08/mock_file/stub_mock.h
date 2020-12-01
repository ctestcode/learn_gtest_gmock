// clang-format off
#pragma once
#include "mock_lib.h"
extern "C"
{
#include "mock_include.h"
}
BEGIN_UC()
END_UC()


namespace UT
{


BEGIN_MOCK()
END_MOCK()


#include "stub_mock_imp.h"
}// namespace UT

