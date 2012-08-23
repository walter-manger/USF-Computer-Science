
#include <stdio.h>

int *find_middle(int *a, int n);

int main(int argc, char *argv[])
{
   int a[5] = {1,2,3,4,5};
   
   printf("The middle element is %d\n", *find_middle(a,5));
   
   getchar();
   getchar();
   return 0;
}

int *find_middle(int *a, int n)
{
   int i = 0;
   int middle = n/2;
   
   for(;i < middle;a++,i++);
   
   return a;
}