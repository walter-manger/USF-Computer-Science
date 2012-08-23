
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *duplicate(const char *str);

int main()
{
   char *p = duplicate("This is a string");

   
   if(p == NULL)
      printf("Duplication failed!\n");
   else
      printf("Duplication worked!\n%s", p);
      
   getchar();
   getchar();
   return 0;
}

char *duplicate(const char *str)
{
   char *result = malloc(strlen(str) + 1);; 
   
   if(result == NULL)
   {
      printf("result is null\n\n");
      return NULL;
   }

   strcpy(result, str);
   
   return result;
}
