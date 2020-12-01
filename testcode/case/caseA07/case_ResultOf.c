//d06 ResultOf 函数结果 匹配，使用场景：对复杂的struct结构体，制定匹配函数
/*******************************************************************************
  学习 ： ResultOf 函数结果匹配
*******************************************************************************/
int CheckFunction(ABC *p) 
{ 
    if (p->a > 100) return 1;
    return 0;
}
TEST_F(HelloGmock, case_ResultOf_1)
{
    auto m= ResultOf(&CheckFunction, Eq(1));
    //auto m1= ResultOf(&CheckFunction1, Eq(1));
    EXPECT_CALL(_mock,CheckABC(m,_));
    Sample2(123,2.1,"abc");
}
TEST_F(HelloGmock, case_ResultOf_2)
{
    Matcher<ABC *> m = ResultOf(&CheckFunction, Eq(1));
    ABC abc={123,2.1,"abc"};
    EXPECT_TRUE(m.Matches(&abc));
}

