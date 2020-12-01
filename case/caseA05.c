//caseA05.c
extern int getLevel(int value ,int flag);
extern int PrintLevel(int value); 
extern void Cleanup();
void GetPrintReturn(int count)
{
    int i=0,ret=0;
    for(i=0;i<count;++i)
    {
        ret=getLevel(i,0);
        PrintLevel(ret);
        printf("Loop [%d],ret[%d]\r",i,ret);
    }
    Cleanup();
}