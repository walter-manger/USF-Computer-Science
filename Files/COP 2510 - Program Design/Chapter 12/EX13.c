
#include <stdio.h>

#define N 10

void NoPointers(double ident[][N], int n);
void WithPointers(double ident[][N], int n);

int main()
{
   double ident[N][N];
   
   printf("Without Pointers \n");
   NoPointers(ident,N);
   
   printf("\n\nWith Pointers \n");
   WithPointers(ident,N);

   getchar();
   getchar();
   
   return 0;
}

void NoPointers(double ident[][N], int n)
{
   int row, col;

   for(row = 0; row < n; row++)
   {
      for(col = 0; col < n; col++)
      {
         if(row == col)
         {
            ident[row][col] = 1.0;
         }
         else
         {
            ident[row][col] = 0.0;
         }
      }
   }

   for(row = 0; row < n; row++)
   {
      for(col = 0; col < n; col++)
      {
         printf("%.1f   ", ident[row][col]);
      }
      printf("\n");
   }
}

void WithPointers(double ident[][N], int n)
{
   double *p;
   int zerosInserted = N;
   int numbersPrinted = 0;
   
   /*
      ident is already a pointer to the array at ident[0][n].
      Basically, the column array in the first row.
      Using ident[0] assigns ident[0][0] to the pointer. (First row, First Column)
   */
   
   for(p = ident[0]; p < ident[n - 1] + n; p++)
   {
      if(zerosInserted == N)
      {
         *p = 1;
         zerosInserted = 0;
      }
      else
      {
         *p = 0;
         zerosInserted++;
      }
   }
   
   for(p = ident[0]; p < ident[n - 1] + n; p++)
   {
      
      printf("%.1f   ", *p);
      numbersPrinted++;
      
      if(numbersPrinted == N)
      {
         printf("\n");
         numbersPrinted = 0;
      }
      
   }
   
   return;
}

