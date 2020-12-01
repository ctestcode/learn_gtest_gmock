//caseA06.c
extern int addtest(int a,float b, char *p);
extern void add(int a,float  b);

int Sample1(int a,float b,char *p)
{
    int ret=0;
    UT::add(a,b);
    ret=UT::addtest(a,b,p);
    printf(" a=%d\n b=%f\n p=%s\n",a,b,p);
    printf(" ret=%d\n",ret);
    return  ret;
}