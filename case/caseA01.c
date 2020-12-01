//源代码caseA01.c
int compare(unsigned int a,unsigned int b)
{ 
   if (a-b>0)
   {
    return 1;
   }if( a==b)
   {
       return 0;
   }if ( a<b)
   {
       return -1;
   }
}
