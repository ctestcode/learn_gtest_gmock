//源代码caseA03.c
#define HIGH_LEVEL  2
#define LOW_LEVEL  1
#define ZERO_LEVEL  0
extern int getLevel(int value ,int flag);

int printValue( int value,int flag)
{
    int level= UT::getLevel(value,flag);
    if (HIGH_LEVEL==level)
    {
        printf("HIGH_LEVEL\r");
        
    }else if (LOW_LEVEL==level)
    {
        printf("LOW_LEVEL\r");
       
    }else if (ZERO_LEVEL==level) 
    {
        printf("ZERO_LEVEL\r"); 
    }
    return level ;
}