
#include "stub_mock.h"

#define THE_UNIT HelloGmock

UT_MAIN();



BEGIN_UC()
#include "uttest_caseA05.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()


using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_after.c"
#include "case_InSequence.c"
#include "case_Multi_EXPECT_CALL.c"
#include "case_RetiresOnSaturation.c"
#include "case_Sequence.c"
}
//END_CASE
