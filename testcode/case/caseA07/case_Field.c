//d05 Field|AllOf|成员匹配，使用场景: 对struct结构体里的成员变量进行验证
/*******************************************************************************
  学习 ： 成员匹配 Field
*******************************************************************************/
auto m1= Field(&ABC::a, Eq(123));
auto m2= Field(&ABC::b, FloatEq(2.1));
auto m3= Field("check ABC::data",&ABC::data, StrEq("abc"));
TEST_F(HelloGmock, case_Field1)
{
    EXPECT_CALL(_mock,CheckABC(m1,_));
    Sample2(123,2.1,"abc");
}
TEST_F(HelloGmock, case_Field2)
{
    auto mall=AllOf(m1,m2,m3);
    EXPECT_CALL(_mock,CheckABC(mall,_));
    Sample2(123,2.1,"abc");
}

