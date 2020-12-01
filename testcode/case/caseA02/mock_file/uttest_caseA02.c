//源代码caseA02.c
int g_value=100;
int *GetIntData(int flag)
{
   if(flag==1){
       return &g_value;
    }
   else{
       return NULL;
   }
}
   