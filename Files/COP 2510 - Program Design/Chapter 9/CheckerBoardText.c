
#include <stdio.h>

int main()
{
   int i = 0;
   int j = 0;
   char checkerBoard[8][8] = {};
   
   for(i=0;i<8;i++)
   {
      for(j=0;j<8;j++)
      {
         if((((i+1) % 2) == 0))
         {
            checkerBoard[i][j] = (((j+1) % 2) == 0) ? 'B' : 'R';            
         }
         else
         {
            checkerBoard[i][j] = (((j+1) % 2) == 0) ? 'R' : 'B';
         }
      }
   }
   
   for(i=0;i<8;i++)
   {
      for(j=0;j<8;j++)
      {
         printf("%c",checkerBoard[i][j]);          
      }
      printf("\n");
   }
   

   getchar();
   getchar();
   
   return 0;
   
}