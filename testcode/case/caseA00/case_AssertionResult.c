// b02 AssertionResult, 使用场景: 自定义判断函数,并输出额外信息
// 单元测试用例 
/*******************************************************************************
  学习:   AssertionResult 的使用方法
*******************************************************************************/
AssertionResult  isGreaterThan10_result(short a ,short b)
{
    if (add(a,b)>=10)
    {
        return AssertionSuccess() ;
    }
    return AssertionFailure() << "add " <<a<< '+'<<b<< "<10";
}
TEST(HelloGtest, case_AssertionResult)
{
    EXPECT_TRUE(isGreaterThan10_result(5,1));
}

