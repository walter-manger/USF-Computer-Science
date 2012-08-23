
#include <stdio.h>
#include <string.h>

#define VIOLATOR_COUNT 3
#define MAX_LENGTH 50
#define DEBUG 0
int censor(char sentence[], int n);
int censorPointer(char *text_to_search, char const *text_to_replace, char replacement_char, int n);
int read_line(char str[], int n);

int main(int argc, char *argv[])
{
   char in[MAX_LENGTH];
   int replacements = 0;
   
   printf("Enter a sentence to be censored: ");
   
   read_line(in,MAX_LENGTH);
   
   //replacements = censor(in,MAX_LENGTH);
   
   replacements = censorPointer(in,"foo",'x',MAX_LENGTH);
   
   printf("Censored: %s\n", in);
   printf("%d Replacements", replacements);
   
   getchar();
   getchar();
   return 0;
}

int censor(char sentence[], int n)
{
   int i = 0, j = 0, replacements = 0;
   char const violator[VIOLATOR_COUNT] = "foo";

   for(; i < n; i++)
   {
      if(sentence[i] == violator[j++])
      {
         if(j == 3)
         {

            sentence[i-2] = 'x';
            sentence[i-1] = 'x';
            sentence[i] = 'x';

            replacements++;
            j = 0; 
            // Replaced the violation, now reset and look for more.
         }
      }
      else
      {
         j = 0;
      } 
   }
   
   return replacements;
}

int censorPointer(char *text_to_search, char const *text_to_replace, char replacement_char, int n)
{
   int replacements = 0;
   char const *holder = text_to_replace;
   char *marker;

   while(*text_to_search != 0)
   {  
      if(*text_to_search++ == *text_to_replace++)
      {
         if(!*text_to_replace) //We've reached the null char, we've matched the whole q
         {
            marker = text_to_search;
            text_to_search = text_to_search - 3;
            
            if(DEBUG)
            {
               printf("Marker is %c\n", *marker);
               printf("text_to_search is %c\n", *text_to_search);
            }
            
            for(; text_to_search < marker; text_to_search++)
            {
               *text_to_search = 'x';
            }

            replacements++;
            text_to_replace = holder; // reset the foo array to zero
         }
      }
      else
      {
         text_to_replace = holder; // reset the foo array to zero
         
         if(DEBUG)
            printf("text_to_replace is back to %c\n", *text_to_replace);
      }
      
   }
   
   return replacements;
}

int read_line(char str[], int n)
{
   int ch, i = 0;

   while((ch = getchar()) != '\n')
   {
      if(i < n)
      {
         str[i++] = ch;
      }
   }
   
   str[i] = '\0';
   return i;
}