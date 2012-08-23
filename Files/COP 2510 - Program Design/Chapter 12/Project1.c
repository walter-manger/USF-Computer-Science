#include <stdio.h>

char *getInputWithPointer(char message[], int n);
void reverseWithPointers(char message[], char *startElement);

int main()
{
   
   char *charElement;
   char message[80] = {0};
   
   charElement = getInputWithPointer(message,80);
   
   reverseWithPointers(message, charElement);
  
   getchar();
   getchar();

   return 0;
}

char *getInputWithPointer(char *message, int n)
{
   int charCount = 0;
   
   printf("Enter a message: ");
   
   while((*message = getchar()) != '\n')
   {
      message++;
      charCount++;
      if(message >= (message + n))
      {
         break;
      }
   }
   
   return --message;
}

void reverseWithPointers(char message[], char *startElement)
{
   printf("Reversal is: ");

   while(message <= startElement)
   {
      printf("%c", *startElement);
      --startElement;
   }
   
   printf("\n");
}
