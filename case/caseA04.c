//源代码caseA04.c
#define HIGH_LEVEL  2
#define LOW_LEVEL  1
#define ZERO_LEVEL  0
extern int getLevel(int value ,int flag);

int printValueLoop( int value)
{
    int i=0,level=0;
    while(i<value) 
    {
        level=getLevel(value,i++);
        printf("loop %d\r",i);
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
    }
    return level ;
}