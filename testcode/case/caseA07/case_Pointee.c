//d04 Pointee指针匹配, 使用场景:验证指针变量所指的值
/*******************************************************************************
  学习 ： Pointee用法
*******************************************************************************/
TEST_F(HelloGmock, case_Pointee_1)
{
    EXPECT_CALL(_mock,CheckABC(_,Pointee(123)));
    Sample2(123,2.1,"abc");
}

