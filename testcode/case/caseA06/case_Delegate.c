//d50 MOCK设置代理动作  使用场景: 定义MOCK代理函数或调用真实函数
/*******************************************************************************
	学习:	MOCK设置代理函数
*******************************************************************************/
char STR1[50]={};
int my_addtest(int a,float b, char *p)
{      
    strcpy(p,"This addtest");
    return 1 ;
}
TEST_F(HelloGmock, case_Delegate1)
{
    ON_CALL(_mock,addtest)
		.WillByDefault(Invoke(my_addtest));
    EXPECT_EQ(1,Sample1(100,1,STR1));
}
TEST_F(HelloGmock, case_Delegate2)
{
    EXPECT_CALL(_mock,addtest)
		.WillOnce(my_addtest);
    EXPECT_EQ(1,Sample1(100,1,STR1));
}