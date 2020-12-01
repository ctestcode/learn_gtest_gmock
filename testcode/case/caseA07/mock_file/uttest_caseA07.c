//caseA07.c
typedef struct _ABC
{
    int a;
    float b;
    char data[20];
}ABC;
extern int CheckABC(ABC* abc ,int *a);
int Sample2(int a,float b,char *p)
{
    ABC abc={0};
    abc.a=a;
    abc.b=b;
    strncpy(abc.data,p,20);
    printf(" abc.a=%d\n",abc.a);
    printf(" abc.b=%f\n",abc.b);
    printf(" abc.data=%s\n",abc.data);
    UT::CheckABC(&abc,&a);
    printf("After abc.a=%d\n",abc.a);
    printf("After abc.b=%f\n",abc.b);
    printf("After abc.data=%s\n",abc.data);
    return  a;
}