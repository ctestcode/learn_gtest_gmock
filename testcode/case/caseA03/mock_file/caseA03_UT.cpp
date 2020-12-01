
#define caseA03_UT
#include "stub_mock.h"



#ifndef THE_UNIT
#define THE_UNIT HelloGmock
#endif 
UT_MAIN();



BEGIN_UC()
#include "uttest_caseA03.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()


using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_EXPECT_CALL.c"
#include "case_EXPECT_CALL_fail.c"
#include "case_MATCHER_ANY.c"
#include "case_ON_CALL.c"
}
//END_CASE
