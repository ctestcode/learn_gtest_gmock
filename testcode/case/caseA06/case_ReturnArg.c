//d41  ReturnArg 动作 使用场景: 把函数的参数作为函数的返回值返回
/*******************************************************************************
  学习：ReturnArg的使用方法
*******************************************************************************/
TEST_F(HelloGmock, ReturnArg)
{
    EXPECT_CALL(_mock,addtest)
        .WillOnce(ReturnArg<1>());
    EXPECT_EQ(2,Sample1(1,2,"abc"));
}