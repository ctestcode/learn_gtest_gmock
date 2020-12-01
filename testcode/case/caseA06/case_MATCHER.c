// d01 MATCHER 匹配,使用场景：使用gmock内置匹配器，对单个参数值进行验证(如函数参数值）
// 单元测试用例
/*******************************************************************************
  学习:   MATCHER 匹配的方法
*******************************************************************************/
TEST_F(HelloGmock, case_MATCHER1)
{
    EXPECT_CALL(_mock,addtest(Gt(5),FloatEq(3),NotNull()))
        .WillOnce(Return(0));
    Sample1(10,3.000001,"test");
}
TEST_F(HelloGmock, case_MATCHER2)
{
    EXPECT_CALL(_mock,addtest(Ne(5),FloatNear(3,0.5),IsNull()))
        .WillOnce(Return(0));
    Sample1(10,2.6,NULL);
}
TEST_F(HelloGmock, case_MATCHER3)
{
    int value=5;
    EXPECT_CALL(_mock,addtest(Ne(6),2.6,StartsWith("abc")))
        .WillOnce(Return(0));
    Sample1(5,2.6,"abcdef");
}

