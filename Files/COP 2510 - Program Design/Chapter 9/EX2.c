#include <stdio.h>

int check(int x, int y, int n);

int main()
{
   int x = -1;
   int y = -1;
   int n = -1;
   
   printf("Enter 3 integers: ");
   
   scanf("%d %d %d", &x, &y, &n);
   
   if(check(x,y,n))
   {
      printf("%d and %d are between 0 and %d", x, y, n-1);
   }
   else
   {
      printf("%d and %d are out of the range 0 to %d", x, y, n-1);
   }
   
   return 0;
}

int check(int x, int y, int n)
{
   if((0 < x && x < n-1) && (0 < y && y < n-1))
   {
      return 1;
   }
   
   return 0;
}