
#include <stdio.h>
#include <string.h>

int count_spaces(const char *s);

int main(int argc, char *argv[])
{
   int count = 0;
   const char *sentence = "this is a test";
   
   count = count_spaces(sentence);

   printf("The sentence was: %s\n", sentence);
   printf("There were %d spaces in the sentence.", count);
   
   getchar();
   getchar();
   return 0;
}

int count_spaces(const char *s)
{
   int count = 0;
   
   while(*s++)
   {
      if(*s == ' ')
      {
         count++;
      }
   }

   return count;
}