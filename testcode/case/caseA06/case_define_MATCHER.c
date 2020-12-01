// d02 定义 MATCHER和EXPECT_THAT,使用场景:自定义匹配器。并使用EXPECT_THAT调用匹配器，对单个值进行验证
// 单元测试用例
/*******************************************************************************
  学习:  定义 MATCHER 的使用方法
*******************************************************************************/
MATCHER(IsEven, "") 
{ 
    *result_listener<<"+++NOT EVEN+++";
    return (arg % 2) == 0;
}
MATCHER_P(IsDivisibleBy, n, "") 
{ 
    *result_listener << "+++where the remainder is+++" << (arg % n);
    return (arg % n) == 0; 
}
TEST_F(HelloGmock, case_Define_MATCHER1)
{
    EXPECT_CALL(_mock,addtest(IsEven(),_,_))
        .WillOnce(Return(2));
    int ret=Sample1(10,0,NULL);
    EXPECT_TRUE(Value(ret, IsEven()));
    EXPECT_THAT(ret, IsEven());
}
TEST_F(HelloGmock, case_Define_MATCHER2)
{
    EXPECT_CALL(_mock,addtest(IsDivisibleBy(5),_,_));
    Sample1(10,0,NULL);
}