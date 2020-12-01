//d21 SetArgPointee 动作,使用场景: 设置指针参数的值或结构数据
TEST_F(HelloGmock, case_SetArgPointee)
{
    ABC abc={0};
    abc.a=2; 
    abc.b=1.5;
    strncpy(abc.data,"efg",20);
    auto doall=DoAll(
        SetArgumentPointee<0>(abc),
        SetArgumentPointee<1>(456),
        Return(0));
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(doall);
    int value=Sample2(123,2.1,"abc");
    EXPECT_EQ(value,456);
}