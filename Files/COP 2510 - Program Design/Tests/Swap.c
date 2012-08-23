
#include <stdio.h>

void swap(int *m, int *n);

int main()
{
   int m = 2, n = 7;
   
   printf("Swapping %d and %d\n", m, n);
   
   swap(&n,&m);
   
   printf("Swapped %d and %d\n", m, n);
   
   getchar();
   getchar();

   return 0;
   
}

void swap(int *m, int *n)
{
   int temp = *m;
   *m = *n;
   *n = temp;
}