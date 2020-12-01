//d12 SaveArg 动作，使用场景: 保存MOCK函数参数的值到局部变量
/*******************************************************************************
  学习 ： SaveArg 副作用
*******************************************************************************/
TEST_F(HelloGmock, case_SaveArg )
{
    int a;
    float b=0;
    EXPECT_CALL(_mock,addtest)
        .WillOnce(DoAll(SaveArg<0>(&a),SaveArg<1>(&b),Return(0)));
    EXPECT_EQ(0,Sample1(123,2.1,"abc"));
    EXPECT_EQ(a,123);
    EXPECT_FLOAT_EQ(b,2.1);
}
