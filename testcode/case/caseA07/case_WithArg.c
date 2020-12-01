//d52 WithArg 动作 使用场景：MOCK调用后，自定义动作里可以处理指定的MOCK函数的参数
/*******************************************************************************
  学习 ： 定义 Action
*******************************************************************************/
ACTION(MyAction) 
{ 
    ABC*p = (ABC*)(arg0);
    printf(" action.p->a=%d\n",p->a);
    return p->a;
}
TEST_F(HelloGmock, case_case_WithArg)
{
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(WithArg<0>(MyAction()));
    int ret=Sample2(123,2.1,"abc");
    EXPECT_EQ(123,ret);
}
