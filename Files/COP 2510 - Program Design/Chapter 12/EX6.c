/*
   REMEMBER: If the parameter is const, the pointer has to be const!
*/


#include <stdio.h>

int sum_array(const int *a, int n);

int main()
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   
   printf("The sum is %d\n", sum_array(a,10));
   
   getchar();
   getchar();
   return 0;
   
}

int sum_array(const int *a, int n)
{
   const int *p;
   int sum = 0;
   
   for(p = a; p < a + n; p++)
   {
      sum += *p;
   }
   
   return sum;
}