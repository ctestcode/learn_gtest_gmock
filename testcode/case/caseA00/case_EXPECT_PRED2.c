// b01 EXPECT_PRED2, 使用场景: 自定义判断函数 对函数进行的值进行测试
// 单元测试用例 
/*******************************************************************************
  学习:  EXPECT_PRED2的使用方法
*******************************************************************************/
bool isGreaterThan10(short a ,short b)
{
    return add(a,b)>=10;
}
TEST(HelloGtest, case_EXPECT_PRED2_success)
{
    EXPECT_PRED2(isGreaterThan10,5,5);
}
