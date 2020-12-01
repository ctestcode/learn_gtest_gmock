//d51 定义 Action 动作 使用场景：MOCK调用后执行自定义代码
/*******************************************************************************
  学习 ： 定义 Action
*******************************************************************************/
ACTION(MyAction) 
{ 
    ABC*p = (ABC*)(arg0);
    int a=   (*arg1);
    printf(" action.p->a=%d\n",p->a);
    printf(" action.a=%d\n",a);
    return a;
}
TEST_F(HelloGmock, case_define_Action_1)
{
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(Invoke(MyAction()));
    int ret=Sample2(123,2.1,"abc");
    EXPECT_EQ(123,ret);
}
ACTION_P(MyAction1,n) 
{ 
    ABC*p = (ABC*)(arg0);
    int a=   (*arg1);
    printf(" action1.p->a=%d\n",p->a);
    printf(" action1.a=%d\n",a);
    return (a+n);
}
TEST_F(HelloGmock, case_define_Action_2)
{
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(Invoke(MyAction1(10)));
    int ret=Sample2(123,2.1,"abc");
    EXPECT_EQ(123,ret);
}