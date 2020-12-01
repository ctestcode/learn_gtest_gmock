//d20 SaveArgPointee 动作，使用场景: 保存指针参数所指的值或结构数据

TEST_F(HelloGmock, case_SaveArgPointee)
{
    int a;
    ABC abc;
    auto doall=DoAll(
        SaveArgPointee<0>(&abc),
        SaveArgPointee<1>(&a),
        Return(0));
    EXPECT_CALL(_mock,CheckABC)
        .WillOnce(doall);
    Sample2(123,2.1,"abc");
    EXPECT_EQ(a,123);
    EXPECT_EQ(abc.a,123);
    EXPECT_FLOAT_EQ(abc.b,2.1);
    ASSERT_STREQ(abc.data,"abc");
}