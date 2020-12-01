//c10 Times|WillOnce|WillRepeatedly 使用场景，MOCK被调用多次时，可以分别设置每次的返回值和行为。
/*******************************************************************************
  学习: Times().WilOnce().WillRepeatedly() 的使用
*******************************************************************************/
TEST_F(HelloGmock, case_Times)
{
    EXPECT_CALL(_mock,getLevel)
        .Times(3)
        .WillOnce(Return(HIGH_LEVEL))
        .WillOnce(Return(LOW_LEVEL))
        .WillOnce(Return(ZERO_LEVEL));
    EXPECT_EQ(ZERO_LEVEL,printValueLoop(3));
}
TEST_F(HelloGmock, case_WillRepeatedly)
{
    EXPECT_CALL(_mock,getLevel)
        .Times(AtMost(5))
        .WillOnce(Return(HIGH_LEVEL))
        .WillRepeatedly(Return(LOW_LEVEL));
    EXPECT_EQ(LOW_LEVEL,printValueLoop(5));
}
TEST_F(HelloGmock, case_TimesZero)
{
    EXPECT_CALL(_mock,getLevel)
        .Times(0);
    EXPECT_EQ(ZERO_LEVEL,printValueLoop(0));
}

