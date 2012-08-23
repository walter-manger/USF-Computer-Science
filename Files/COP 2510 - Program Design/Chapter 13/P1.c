
#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 20
#define DEBUG 1

int read_line(char word[], int n);

int main(int argc, char *argv[])
{
   char  currentWord[MAX_WORD_LENGTH + 1],
         largestWord[MAX_WORD_LENGTH + 1],
         smallestWord[MAX_WORD_LENGTH + 1];

   printf("Enter word: ");
   read_line(currentWord,MAX_WORD_LENGTH);
   strcpy(smallestWord, strcpy(largestWord,currentWord));
   
   while(strlen(currentWord) != 4)
   {
      printf("Enter word: ");
      read_line(currentWord,MAX_WORD_LENGTH);
      
      if(strcmp(currentWord, smallestWord) < 0)
         strcpy(smallestWord,currentWord);
         
      if(strcmp(currentWord, largestWord) > 0)
         strcpy(largestWord, currentWord);
   }
   
   printf("\nSmallest word: %s\n", smallestWord);
   printf("\nLargest word: %s\n", largestWord);
   
   getchar();
   getchar();
   return 0;
}

int read_line(char word[], int n)
{
   int ch, i = 0;

   while((ch = getchar()) != '\n')
   {
      if(i<n)
      {
         word[i++] = ch;
      }
   }
   
   word[i] = '\0';
   return i;
}