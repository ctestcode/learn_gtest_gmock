// d10 With 匹配, 使用场景: 多个参数之间相互关联时，使用with链接匹配器，对多个参数值进行验证。
// 单元测试用例
/*******************************************************************************
  学习:   With 的使用方法
*******************************************************************************/
MATCHER(myGt, "") 
{ 
    *result_listener<<"+++check error+++";
    int Arg0=std::get<0>(arg);
    float Arg1=std::get<1>(arg);
    printf("Arg0=%d\n",Arg0);
    printf("Arg1=%f\n",Arg1);
    return  Arg0>Arg1;
}
int myGTFunction(const std::tuple<int, float> arg)
{
    int a=std::get<0>(arg);
    float b=std::get<1>(arg);
    return  a>b;
}
TEST_F(HelloGmock, case_With1)
{
    EXPECT_CALL(_mock,add)
        .With(Gt());
    Sample1(9,8,"test");
}
TEST_F(HelloGmock, case_With2)
{
    EXPECT_CALL(_mock,addtest)
        .With(Args<0,1>(myGt()));
    Sample1(9,8,"test");
}
TEST_F(HelloGmock, case_With3)
{
    EXPECT_CALL(_mock,addtest)
        .With(AllArgs(myGt()));
    Sample1(9,8,"test");
}
TEST_F(HelloGmock, case_With4)
{
    EXPECT_CALL(_mock,addtest)
        .With(Args<0,1>( Truly(myGTFunction)));
    Sample1(9,8,"test");
}