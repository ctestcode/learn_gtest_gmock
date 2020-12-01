//c03 EXPECT_CALL 错误解析
// 单元测试用例
/*******************************************************************************
	读懂:	错误解析
	观察：	修改测试用例，为printValue(10),观察期望不满足时的测试结果
*******************************************************************************/
TEST_F(HelloGmock, case_EXPECT_CALL_fail)
{
	EXPECT_CALL(_mock,getLevel(100,0))
		.WillOnce(Return(HIGH_LEVEL));
	EXPECT_EQ(HIGH_LEVEL,printValue(50,0));
}

