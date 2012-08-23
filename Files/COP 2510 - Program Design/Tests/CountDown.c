
#include <stdio.h>

void CountDown(int n);

int main()
{
   
   CountDown(10);

   getchar();
   getchar();

   return 0;
}

void CountDown(int n)
{
   printf("n = %d\n", n--);

   if(n >= 0)
   {
      CountDown(n);
   }
}