
#include <stdio.h>

void PrintHourlyTemperatures(int *a, int day);

int main()
{
   int temperatures[7][24];
   int i = 0;
   
   for(i=0;i<24;i++)
   {
      temperatures[2][i] = 30 + i;
   }

   PrintHourlyTemperatures(&temperatures[2][0],2);
   
   getchar();
   getchar();
   return 0;
   
}

void PrintHourlyTemperatures(int *a, int day)
{
   int hour = 0;
   int *p;
   
   printf("The hourly temperatures for day %d are: \n", day);
   
   for(p = a; p < a + 24; p++)
   {
      hour++;
      printf("Hour: %3d - Tempurature: %3d \n", hour, *p);
   }
}