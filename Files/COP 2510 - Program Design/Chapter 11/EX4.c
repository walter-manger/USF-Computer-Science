#include <stdio.h>

void swap(int *p, int *q);

int main()
{
   int x = 2;
   int y = 8;
   
   int *p = &x;
   int *q = &y;
   
   printf("P = %d, Q = %d\n", x, y);
   printf("Swapping...\n");
   swap(p,q);
   printf("P = %d, Q = %d", x, y);

   getchar();
   getchar();
   
   return 0;
}

void swap(int *p, int *q)
{
   int temp = *p;
   *p = *q;
   *q = temp;
   
}