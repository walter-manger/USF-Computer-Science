#include <stdio.h>

int digit(int n, int k);

int main()
{
   int n = 287687665;
   int k = 1;
   
   printf("The %dth number in the integer %d is %d", k, n, digit(n,k));
   
   getchar();
   getchar();
   
   return 0;   
}


int digit(int n, int k)
{
   int divisor = 1;
   int i = 0;
   int mod = 1;
   
   if(k >= 1)
   {
      for(i=0; i<k; i++)
      {
         mod *= 10;   
      }
      
      for(i=1; i<k; i++)
      {
         divisor *= 10;   
      }
      
   } 

   printf("divisor = %d\n", divisor);
   printf("mod = %d\n", mod);
   
   if(n < divisor)
      return 0;

   if(n < mod)
      return n/divisor;
   else
      return (n % mod)/divisor;          
}