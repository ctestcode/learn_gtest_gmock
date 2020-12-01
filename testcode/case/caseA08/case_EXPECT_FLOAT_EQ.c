// a06 EXPECT_FLOAT_EQ, 使用场景: 浮点数比较
// 单元测试用例  
/*******************************************************************************
  学习:   EXPECT_FLOAT_EQ 的使用方法
  练习：  使用帮助里的其他语句，进行练习
*******************************************************************************/
TEST(HelloGtest, case_EXPECT_FLOAT_EQ)
{
   EXPECT_FLOAT_EQ(GetValueFloat(0),3.1);             
}
TEST(HelloGtest, case_EXPECT_NEAR)
{
   EXPECT_NEAR(GetValueFloat(1),3.4,0.5);            
}