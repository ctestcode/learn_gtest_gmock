//c14 RetiresOnSaturation 使用场景：验证,有循环的情况下，多个MOCK函数的先后调用关系
/*******************************************************************************
  学习：RetiresOnSaturation的使用
*******************************************************************************/
TEST_F(HelloGmock, case_RetiresOnSaturation)
{
    EXPECT_CALL(_mock,getLevel)
		.WillOnce(Return(2))
		.RetiresOnSaturation();
    EXPECT_CALL(_mock,getLevel)
		.WillOnce(Return(3))
		.RetiresOnSaturation();
    GetPrintReturn(2);
}
TEST_F(HelloGmock, case_RetiresOnSaturation_sequence)
{
    InSequence seq;
    EXPECT_CALL(_mock,getLevel)
		.WillOnce(Return(2))
		.RetiresOnSaturation();
    EXPECT_CALL(_mock,getLevel)
		.WillOnce(Return(3))
		.RetiresOnSaturation();
    GetPrintReturn(2);
}