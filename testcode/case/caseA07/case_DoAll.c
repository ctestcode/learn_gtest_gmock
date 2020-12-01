//d53 DoAll 动作  使用场景： 关联多个动作，简化代码
/*******************************************************************************
  学习 ： 定义 DoAll
*******************************************************************************/
ACTION(MyAction) 
{ 
    ABC*p = (ABC*)(arg0);
    printf(" action.p->a=%d\n",p->a);
}
ACTION(MyAction1) 
{ 
    printf("hello\n");
}
TEST_F(HelloGmock, case_DoAll_1)
{
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(DoAll(
        WithArg<0>(MyAction()),
        WithoutArgs(MyAction1())
        ));
    int ret=Sample2(123,2.1,"abc");
    EXPECT_EQ(123,ret);
}
TEST_F(HelloGmock, case_DoAll_2)
{
    auto at1=WithArg<0>(MyAction());
    auto at2=WithoutArgs(MyAction1());
    auto atAll=DoAll(at1,at2);
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(atAll);
    int ret=Sample2(123,2.1,"abc");
    EXPECT_EQ(123,ret);
}
