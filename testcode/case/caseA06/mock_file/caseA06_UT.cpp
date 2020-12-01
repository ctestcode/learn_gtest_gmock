
#define caseA06_UT
#include "stub_mock.h"

#define THE_UNIT HelloGmock

UT_MAIN();



BEGIN_UC()
#include "uttest_caseA06.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()



using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_Assign.c"
#include "case_define_MATCHER.c"
#include "case_define_MATCHER_Truly.c"
#include "case_Delegate.c"
#include "case_MATCHER.c"
#include "case_ReturnArg.c"
#include "case_SaveArg.c"
#include "case_With.c"
}
//END_CASE