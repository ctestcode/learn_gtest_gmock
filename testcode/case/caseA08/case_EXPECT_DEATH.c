// b09 EXPECT_DEATH, 使用场景: 检验程序的退出码，退出信号，退出时打印的字符串
// 单元测试用例  
/*******************************************************************************
  学习:   EXPECT_DEATH 的使用方法
  练习：  使用帮助里的其他语句，进行练习
*******************************************************************************/
TEST(DeathTest, case_EXPECT_DEATH)
{
   EXPECT_DEATH(
   {
        const char * p=GetValueStr(2);
        fprintf(stderr,"Pointer %d is null",&p);
        fflush(stderr);
        if (p[0]=='T')
            printf("Should not enter here");
   },
   "\\d is null");
}
TEST(DeathTest, NormalExit) 
{
  EXPECT_EXIT( exit(456) ,ExitedWithCode(456), "");
}
