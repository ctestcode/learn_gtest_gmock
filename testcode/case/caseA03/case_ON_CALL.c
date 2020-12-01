//c01 ON_CALL|WillByDefault|Return  设置MOCK默认行为
//使用场景:设置MOCK函数被调用时,指定参数时的默认的返回值。
// 单元测试用例， 学习:	ON_CALL	WillByDefault 方法
/*******************************************************************************
	case_ON_CALL：演示了WillByDefault用法
	case_ON_CALL_default: 演示了没有WillByDefault时的返回值。
	练习：	添加测试代码，测试 LOW_LEVEL 的分支
*******************************************************************************/
TEST_F(HelloGmock, case_ON_CALL)
{
    ON_CALL(_mock,getLevel(0,0))
		.WillByDefault(Return(ZERO_LEVEL));
    ON_CALL(_mock,getLevel(100,0))
		.WillByDefault(Return(HIGH_LEVEL));
    EXPECT_EQ(HIGH_LEVEL,printValue(100,0));
    EXPECT_EQ(ZERO_LEVEL,printValue(0,0));
}
TEST_F(HelloGmock, case_ON_CALL_default)
{
    EXPECT_EQ(0,printValue(100,0));
}

