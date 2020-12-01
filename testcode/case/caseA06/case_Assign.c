// d09 Assign 动作, 使用场景: 改变局部变量的值。
/*******************************************************************************
  学习 ： Assign 副作用
*******************************************************************************/

TEST_F(HelloGmock, case_Assign )
{
    int value=1;
    
    EXPECT_CALL(_mock,addtest)
        .WillOnce(DoAll(Assign(&value,2),Return(0)));
    printf("value=%d\n",value);
    Sample1(1,2,"abc");
	printf("value=%d Changed\n",value);
    EXPECT_EQ(value,2);
}
