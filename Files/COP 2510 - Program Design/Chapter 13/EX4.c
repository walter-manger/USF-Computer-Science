
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

int read_line(char str[], int n);

int main(int argc, char *argv[])
{
   char in[MAX];
   int charCount = 0;
   
   printf("Print a sentence here: ");
   
   charCount = read_line(in,MAX);
   
   printf("\nYour sentence was:\n%s\nThe sentence contained %d chars", in, charCount);

   getchar();
   getchar();
   return 0;
}

int read_line(char str[], int n)
{
   int ch, i = 0;
   
   // Trim white space
   while(isspace(ch = getchar()));
     
   while(ch != '\n')
   {
      if(isspace(ch))
      {
         break;
      }
   
      if(i < n-1)
      {
         str[i++] = ch;
      }
      
      ch = getchar();
   }
   
   str[i] = '\n';
   str[i+1] = '\0';
   return i;
}