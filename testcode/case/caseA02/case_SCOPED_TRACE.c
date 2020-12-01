//b10 SCOPED_TRACE, 使用场景：判断失败时，显示帮助信息，包括文件和行号
/*******************************************************************************
  学习: SCOPED_TRACE 的使用
*******************************************************************************/
void SubFunction()
{
    SCOPED_TRACE("TEST: SubFunction");
    ASSERT_TRUE(0);
}
TEST(HelloGtest, case_SCOPED_TRACE)
{
    int flag  = 0;
    int *p= UC::GetIntData(flag);
    SubFunction();
}