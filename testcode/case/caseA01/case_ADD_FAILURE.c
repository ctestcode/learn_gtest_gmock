// b08 ADD_FAILURE, 使用场景: 显示地申明错误
// 单元测试用例  
/*******************************************************************************
  学习:   ADD_FAILURE 的使用方法
  练习：  使用帮助里的其他语句，进行练习
*******************************************************************************/
void checkValue(int value)
{
    switch(value)
    {
        case 1: SUCCEED();break;
        case 0: SUCCEED();break;
        case -1:SUCCEED();break;
        default:ADD_FAILURE();
    }
}
TEST(HelloGtest, case_ADD_FAILURE)
{
   int value=compare(2,1);
   checkValue(value);
}
