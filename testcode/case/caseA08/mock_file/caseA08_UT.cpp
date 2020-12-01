#define caseA08_UT
#include "stub_mock.h"
#ifndef THE_UNIT
#define THE_UNIT caseA08
#endif 
UT_MAIN();


BEGIN_UC()
#include "uttest_caseA08.c"
END_UC()


BEGIN_UT_CLASS(THE_UNIT)
void SetUp();
void TearDown();
END_UT_CLASS()


using namespace UC;
#include "caseA08_SETUP.c"


//BEGIN_CASE
namespace UT
{
#include "case_EXPECT_DEATH.c"
#include "case_EXPECT_FLOAT_EQ.c"
#include "case_EXPECT_STREQ.c"
}
//END_CASE
