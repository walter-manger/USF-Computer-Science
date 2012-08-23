
#include <stdio.h>

int fib(int num);

int main()
{
   int num = 10;

   printf("%d fib is %d", num, fib(num)) ;

   getchar();
   getchar();
   
   return 0;
   
}

/* 1 1 2 3 5 8 13 21 */
int fib(int num)
{
   if(num <= 2)
   {
      return 1;
   }
   
   return fib(num-1) + fib(num-2);

}