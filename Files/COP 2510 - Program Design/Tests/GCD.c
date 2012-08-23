

#include <stdio.h>

int gcd(int m, int n);

int main()
{
   int m = 45;
   int n = 30;

   printf("The greatest common denominator of %d and %d is %d", m, n, gcd(m,n));

   getchar();
   getchar();

   return 0;
   
}

int gcd(int m, int n)
{
   int remainder = 0;
   
   if(n==0)
   {
      return m;
   }
   
   remainder = m % n;
   m = n;
   n = remainder;
   
   return gcd(m, n);
   
   
}