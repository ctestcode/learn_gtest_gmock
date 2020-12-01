//c12 Sequence 使用场景：验证多个MOCK函数的先后调用关系
/*******************************************************************************
  学习：有序调用的期望 InSequence
*******************************************************************************/
TEST_F(HelloGmock, case_sequence)
{
    Sequence s1, s2;
    EXPECT_CALL(_mock,getLevel)
        .InSequence(s1);
    EXPECT_CALL(_mock,PrintLevel)
        .InSequence(s1,s2);
    EXPECT_CALL(_mock,Cleanup)
        .InSequence(s2);
    GetPrintReturn(1);
}
