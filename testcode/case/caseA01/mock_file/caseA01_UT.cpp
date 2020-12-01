
#define caseA01_UT
#include "stub_mock.h"
 
 

#ifndef THE_UNIT
#define THE_UNIT gtest
#endif 
UT_MAIN();



BEGIN_UC()
#include "uttest_caseA01.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()



using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_ADD_FAILURE.c"
#include "case_coverage.c"
#include "case_EXPECT_EQ.c"
#include "case_FixBug.c"
}
//END_CASE
