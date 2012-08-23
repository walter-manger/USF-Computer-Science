
#include <stdio.h>

int main(int argc, char *argv[])
{
   int a[10][10] = {{0},{0}};
   int *p = a[0], i = 0;
   
   //Fill Array
   for(;p < a[10]; p++)
      *p = i++;
   
  
   for(p = a[0];p<=a[10];p++)
   {
      if(*p % 10 == 0 && *p > 0)
         printf("%c",'\n');
      printf("%3d", *p);
   }
   
   getchar();
   getchar();
   return 0;
}