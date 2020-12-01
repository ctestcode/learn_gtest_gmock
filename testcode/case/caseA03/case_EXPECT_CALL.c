//c02 EXPECT_CALL|WillOnce 设置MOCK期望
//使用场景：对MOCK函数返回值进行模拟，并设置函数入参的期待。
// 单元测试用例
/*******************************************************************************
	学习:	EXPECT_CALL	 方法
	观察：	修改测试用例，为printValue(10),观察期望不满足时的测试结果
*******************************************************************************/
TEST_F(HelloGmock, case_EXPECT_CALL)
{
	EXPECT_CALL(_mock,getLevel(100,0))
		.WillOnce(Return(HIGH_LEVEL));
	EXPECT_EQ(HIGH_LEVEL,printValue(100,0));
}