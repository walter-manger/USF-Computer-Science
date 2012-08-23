
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXLINE 80

int main(int argc, char *argv[])
{
   FILE *f;
   char c;
   
   if((f = fopen(argv[1],"r")) == NULL)
   {
      printf("The file could not be opened.\n");
      exit(EXIT_FAILURE);
   }

   while((c = fgetc(f)) != EOF)
   {
   
      if(c >= 'a' && c <= 'z')
      {
         c = toupper(c);
      }
   
      printf("%c", c);
      
   }

   fclose(f);
   
   getchar();
   getchar();
   return 0;
   
}
