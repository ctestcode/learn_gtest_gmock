// a02 ASSERT_TRUE, 使用场景: 验证结果为真，失败时，程序终止
// 单元测试用例 
/*******************************************************************************
  学习:   ASSERT_TRUE 的使用方法
  case_ASSERT_TRUE： 演示了 ASSERT_FALSE的用法。
*******************************************************************************/
TEST(HelloGtest, case_ASSERT_TRUE)
{
	short value=add(32767 , 1);
	ASSERT_TRUE(value==32768)<<"32767+1 is not 32768, which is"<<value;
	printf("Hello Gtest!\n");
}

