//c11 After|ExpectationSet 使用场景：验证两个MOCK函数的先后调用关系
/*******************************************************************************
  学习：After的使用方法
*******************************************************************************/
TEST_F(HelloGmock, case_after)
{
    Expectation exp1,exp2;
    exp1=EXPECT_CALL(_mock, getLevel);
    exp2=EXPECT_CALL(_mock, PrintLevel);
    EXPECT_CALL(_mock, Cleanup())
        .After(exp1,exp2);
    GetPrintReturn(1);
}
TEST_F(HelloGmock, case_after_all)
{
    ExpectationSet  all_exp;
    all_exp+=EXPECT_CALL(_mock, getLevel);
    all_exp+=EXPECT_CALL(_mock, PrintLevel);
    EXPECT_CALL(_mock, Cleanup())
        .After(all_exp);
    GetPrintReturn(1);
}