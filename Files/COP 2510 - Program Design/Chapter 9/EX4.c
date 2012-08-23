#include <stdio.h>

int day_of_year(int month, int day, int year);

int main()
{
   int m = 0;
   int d = 0;
   int y = 0;

   

   printf("Enter a date in the format dd/mm/yyyy ");
   scanf("%d/%d/%d", &m,&d,&y);
   
   printf("The day of the year is %d", day_of_year(m,d,y));
   
   return 0;
}

int day_of_year(int month, int day, int year)
{
   /* 
      Total Days = 7*52 
   
      1jan, 3march, 5may, 7july, 8august, 10october, 12december  = 31
      2feb  = 28
      4april, 6june, 9september, 11november  = 30
   */
   
   int i = 0;
   int days = 0;
   
   for(i=1; i < month; i++)
   {
      switch(i)
      {
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12: 
            days += 31;
            break;
         case 2:
            if((year % 400 == 0 || year % 4 == 0))
            {
               days += 29;
            }
            else
            {
               days += 28;
            }
            
            break;
         default:
            days += 30;
            break;
      }
   }
   
   
   return days + day;
   
}