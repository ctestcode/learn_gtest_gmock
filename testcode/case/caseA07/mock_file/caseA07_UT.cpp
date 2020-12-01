

#include "stub_mock.h"

#define THE_UNIT HelloGmock

UT_MAIN();



BEGIN_UC()
#include "uttest_caseA07.c"
END_UC()



BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()



using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_define_Action.c"
#include "case_DoAll.c"
#include "case_Field.c"
#include "case_Pointee.c"
#include "case_ResultOf.c"
#include "case_SaveArgPointee.c"
#include "case_SetArgPointee.c"
#include "case_WithArg.c"
}
//END_CASE
