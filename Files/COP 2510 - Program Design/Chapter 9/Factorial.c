
#include <stdio.h>

int fact(int num);

int main()
{
   printf("%d! is %d", 4, fact(4));
   
   getchar();
   getchar();
   
   return 0;
   
}


/* 6! = 6*5*4*3*2*1 */
int fact(int num)
{

   if(num >= 1)
   {
      return  num * fact(num - 1);
   }
   else
   {
      return 1;
   }
   
   return num;
   
}