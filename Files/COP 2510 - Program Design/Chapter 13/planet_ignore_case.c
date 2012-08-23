
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int test_chars(const char s1[], const char s2[]);

int main(int argc, char *argv[])
{
   int i,j;
   char *planets[] = {"Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn", 
                        "Uranus", "Neptune", "Pluto"};
   
   for(i=1; i < argc; i++)
   {
      for(j = 0; j < NUM_PLANETS; j++)
      {
         /*
            The planet array looks like this
            
            planets|M|e|r|c|u|r|y|\0|V|e|n|u|s|\0|...
            
            test_chars is expecting 2 arrays, we'll need to 
            pass poiters to the first element in each array.
            Basically, a pointer to the first char in each planet.
            
            Each planet could be sent one of these ways:
            planets[0]        --> This would be a pointer to M in Mercury
            &planets[0][0]    --> This is equal
            
         */

         if(test_chars(&argv[i][0], planets[j]) > 0)
         {
            printf("%s is planet %d\n", argv[i], j+1);
            break;
         }
      }
      
      if(j == NUM_PLANETS)
      {
         printf("%s is not a planet\n", argv[i]);
      }
   }
   
   getchar();
   getchar();
   return 0;
   
}

int test_chars(const char s1[], const char s2[])
{
   int i = 0;
   
   for(; toupper(s1[i]) == toupper(s2[i]); i++)
   {
      if(s1[i] == '\0')
      {
         return i;
      }
   }
   
   return 0;
   
}