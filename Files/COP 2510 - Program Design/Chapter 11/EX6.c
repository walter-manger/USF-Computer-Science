#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main()
{
   int x = 0;
   int y = 0;
   int a[N] = {2, 29, 34, 12, 44, 70, 1, 71, 9, 10};
   
   find_two_largest(a,N,&x,&y);
   
   printf("The largest number is: %d\nThe second largest number is: %d", x, y);
   
   getchar();
   getchar();
   
   return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
   int i = 0;

   for(i = 0; i < n; i++)
   {
      if(a[i] > *largest)
      {
         *second_largest = *largest;
         *largest = a[i];
      }
   }
   
}

