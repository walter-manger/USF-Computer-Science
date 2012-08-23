#include <stdio.h>

#define START 6

int main()
{
  
   /*6! = 6*5*4*3*2*1 */
   int n = 1;
   int runningValue = 1;
   
   for(n = START; n > 1; n--)
   {
      runningValue *= n;
   }
   
   printf("%d! = %d", START, runningValue);
   
  
   getchar();
   getchar();

   return 0;
}