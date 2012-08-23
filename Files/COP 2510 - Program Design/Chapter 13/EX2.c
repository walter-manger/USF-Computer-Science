
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char *p = "abc";
   
   //putchar(p);  // Random
   putchar(*p);   // Prints a
   puts(p);       // Prints abc
   //puts(*p);    // Error
   
   getchar();
   getchar();
   return 0;
}