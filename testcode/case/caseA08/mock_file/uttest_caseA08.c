//caseA08.c
const char * GetValueStr(int i)
{
    switch(i)
    {
        case 0:return "TEST0";
        case 1:return "TEST1";
    }
    return NULL;
}
double GetValueFloat(int i)
{
    switch(i)
    {
        case 0:return 3.1;
        case 1:return 3.9;
    }
    return 0;
}