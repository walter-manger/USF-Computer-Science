
#include <stdio.h>

int search(const int a[], int n, int key);

int main(int argc, char *argv[])
{
   int a[10] = {1,2,3,4,5,6,7,8,9,0};
   int key = 100;
   
   printf("Array a %s key %d", search(a,10,key) == 1 ? "contains" : "does not contain", key);

   getchar();
   getchar();
   return 0;
}

int search(const int a[], int n, int key)
{
   const int *p;
   
   for(p = a; p < &a[n]; p++)
   {
      if(*p == key)
      {
         return 1;
      }
   }
   
   return 0;
   
}