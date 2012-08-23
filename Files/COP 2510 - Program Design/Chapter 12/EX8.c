
#include <stdio.h>

void store_zeros(int a[], int n);

int main(int argc, char *argv[])
{
   int i;
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   
   printf("Before: ");
   for(i = 0; i < 10; i++)
   {
      printf("%d", a[i]);
   }
   
   store_zeros(a,10);
   
   printf("\nAfter: ");
   for(i = 0; i < 10; i++)
   {
      printf("%d", a[i]);
   }
   
   getchar();
   getchar();
   return 0;
}

void store_zeros(int a[], int n)
{
   int *p;
   
   for(p=a; p < a + n; p++)
   {
      *p = 0;
   }
}