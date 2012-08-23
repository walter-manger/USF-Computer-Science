
#include <stdio.h>

int main(int argc, char *argv[])
{

   int a[10] = {1,2,3,4,5,6,7,8,9,0};
   int *p = a;
   
   printf("Value is %s\n", p == a[0] ? "True" : "False");
   
   printf("Value is %s\n", p == &a[0] ? "True" : "False");
   
   printf("Value is %s\n", *p == a[0] ? "True" : "False");
   
   printf("Value is %s\n", p[0] == a[0] ? "True" : "False");

   getchar();
   getchar();
   return 0;
   
}
