//单元测试主框架文件
#define caseA00_UT
#include "stub_mock.h"



#ifndef THE_UNIT
#define THE_UNIT caseA00
#endif 
UT_MAIN();


BEGIN_UC()
#include "uttest_caseA00.c"
END_UC()


BEGIN_UT_CLASS(THE_UNIT)
void SetUp(){}
void TearDown(){}
END_UT_CLASS()



using namespace UC;
//BEGIN_CASE
namespace UT
{
#include "case_AssertionResult.c"
#include "case_ASSERT_TRUE.c"
#include "case_EXPECT_PRED2.c"
#include "case_EXPECT_PRED_FORMAT2.c"
#include "case_EXPECT_TRUE.c"
}
//END_CASE
