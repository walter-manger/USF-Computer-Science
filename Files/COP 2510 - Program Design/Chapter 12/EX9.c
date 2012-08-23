
#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(int argc, char *argv[])
{
   double a[5] = {1,2,3,4,5};
   double b[5] = {1,2,3,4,5};
   
   printf("The sum of the product of the two arrays is %f\n", inner_product(a,b,5));
   
   getchar();
   getchar();
   return 0;
}

double inner_product(const double *a, const double *b, int n)
{
   int i; 
   double sum = 0;
   
   for(i = 0; i < n; i++)
   {
      sum += (*a++ * *b++);
   }
   
   return sum;
}