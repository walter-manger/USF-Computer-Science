
#include <stdio.h>
#define ROWS 5
#define COLS 5



int main()
{
   int i = 0;
   int j = 0;
   int matrix[ROWS][COLS] = {};
   int total = 0;
   
   // Row loop
   for(i=0;i<ROWS;i++)
   {
      printf("Enter row %d: ", i + 1);
      
      // Col loop
      for(j=0;j<COLS;j++)
      {
         scanf("%d", &matrix[i][j]);   
      }
   }
     
   printf("\n");

   printf("Row totals: ");
   
   for(i=0;i<ROWS;i++)
   {
      total = 0;
      for(j=0;j<COLS;j++)
      {
         total += matrix[i][j];
      }
      
      printf("%3d", total);
   }
   
   printf("\n");
   
   printf("Column totals: ");
   
   for(i=0;i<COLS;i++)
   {
      total = 0;
      for(j=0;j<ROWS;j++)
      {
         total += matrix[j][i];
      }
      
      printf("%3d", total);
   }      

   getchar();
   getchar();
   
   return 0;
   
}