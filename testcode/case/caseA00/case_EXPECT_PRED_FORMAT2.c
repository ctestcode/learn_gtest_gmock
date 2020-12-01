// b03 EXPECT_PRED_FORMAT2, 使用场景: 错误时，完全自定义错误消息
/*******************************************************************************
  学习:  EXPECT_PRED_FORMAT2的使用方法
*******************************************************************************/
bool isGreaterThan10(short a ,short b)
{
    return add(a,b)>=10;
}
TEST(HelloGtest, case_EXPECT_PRED2_success)
{
	int a=5;
    int b=1;
    EXPECT_PRED2(isGreaterThan10,a,b);
}
AssertionResult  isGreaterThan10_format(const char* a_expr,const char* b_expr,int a ,int b) 
{
    if (add(a,b)>=10)
        return AssertionSuccess() ;
    return AssertionFailure() << "add " <<a_expr <<"("<<a<< ")+"<< b_expr<<"("<<b<< ")<10";
}
TEST(HelloGtest, case_EXPECT_PRED_FORMAT2_fail)
{
    int a=5;
    int b=1;
    EXPECT_PRED_FORMAT2(isGreaterThan10_format,a,b);
}


