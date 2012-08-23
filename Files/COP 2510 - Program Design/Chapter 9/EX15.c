
#include <stdio.h>

double median(double x, double y, double z);

int main()
{
   double x = 0, y = 5, z = 10;
   
   printf("The median of %.2f, %.2f, and %.2f is %.2f\n", x, y, z, median(x,y,z));
   
   getchar();
   getchar();

   return 0;
}

double median(double x, double y, double z)
{
   double returnValue = 0;

   if(x <= y)
   {
      if(y <= z)
      {
         returnValue = y;
      } 
      else if (x <= z)
      {
         returnValue = z;
      }
      else 
      {
         returnValue = x;
      }
   }
   
   if(z <= y)
   {
      returnValue = y;
   }
   
   if(x <= z)
   {
      returnValue = x;
   }
   
   if(returnValue == 0)
   {
      returnValue = z;
   }
   
   return returnValue;
   
   
}