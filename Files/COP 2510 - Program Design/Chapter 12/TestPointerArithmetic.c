
#include <stdio.h>

int main(int argc, char *argv[])
{
   int a[10] = {1,2,3,4,5,6,7,8,9,10};
   
   int *high, *low, *middle;
   
   low = a;
   high = &a[10];
   
   middle = (low + high) / 2;
   
   getchar();
   getchar();
   return 0;

}