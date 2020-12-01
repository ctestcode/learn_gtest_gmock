//c13 InSequence 使用场景：验证多个MOCK函数的先后调用关系，使用更方便
/*******************************************************************************
  学习：有序调用的期望 InSequence
*******************************************************************************/
TEST_F(HelloGmock, case_sequence)
{
    InSequence seq;
    EXPECT_CALL(_mock,getLevel)
        .WillOnce(Return(0));
    EXPECT_CALL(_mock,PrintLevel);
    GetPrintReturn(1);
}
