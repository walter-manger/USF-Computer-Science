
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

int read_line(char word[], int n);

int main(int argc, char *argv[])
{
   int i;
   for(i = argc - 1; i >= 1; i--)
   {
      printf("%s ", argv[i]);
   }
   
   printf("\n");

   getchar();
   getchar();
   return 0;
}