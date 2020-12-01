
#define caseA04_UT
#include "stub_mock.h"



#define THE_UNIT HelloGmock

UT_MAIN();

BEGIN_UC()
#include "uttest_caseA04.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()



using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_EXPECT_Times.c"
}
//END_CASE
