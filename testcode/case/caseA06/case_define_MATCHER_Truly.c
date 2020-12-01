// d03 Truely，使用函数作为 匹配器, 使用场景，自定义函数可以直接用于匹配器进行验证。
// 单元测试用例
/*******************************************************************************
  学习:   Truely 的使用方法
*******************************************************************************/
int IsEven(int n) 
{ 
    return (n % 2) == 0 ? 1 : 0;
}

TEST_F(HelloGmock, case_Define_MATCHER1)
{
    EXPECT_CALL(_mock,addtest(Truly(IsEven),_,_))
        .WillOnce(Return(2));
    int ret=Sample1(10,0,NULL);
    EXPECT_TRUE(Value(ret, Truly(IsEven)));
    EXPECT_THAT(ret, Truly(IsEven));
}
