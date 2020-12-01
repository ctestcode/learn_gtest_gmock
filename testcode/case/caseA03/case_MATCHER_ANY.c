//c04 MOCK参数任意匹配 使用场景：不关注MOCK函数参数时使用。
// 单元测试用例
/*******************************************************************************
	学习:	MOCK参数任意匹配的方式
*******************************************************************************/
TEST_F(HelloGmock, case_MATCHER_ANY1)
{
	ON_CALL(_mock,getLevel)
		.WillByDefault(Return(ZERO_LEVEL));
	EXPECT_EQ(ZERO_LEVEL,printValue(50,0));
}
TEST_F(HelloGmock, case_MATCHER_ANY2)
{
	EXPECT_CALL(_mock,getLevel(_,1))
		.WillOnce(Return(LOW_LEVEL));
	EXPECT_EQ(LOW_LEVEL,printValue(100,1));
}

