

#include "stub_mock.h"


#define THE_UNIT HelloGtest

UT_MAIN();



BEGIN_UC()
#include "uttest_caseA02.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()


using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_access_global_value.c"
#include "case_nullptr.c"
#include "case_SCOPED_TRACE.c"
}
//END_CASE