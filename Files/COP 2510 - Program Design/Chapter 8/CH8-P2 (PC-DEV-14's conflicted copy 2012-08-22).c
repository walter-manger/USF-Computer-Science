/* 

   Chapter 8 - Project 2

   Programmer Name: Walter Manger
   Date: 2/11
*/

#include <stdio.h>

int main()
{
   int digit = 0;
   int repeatedDigits[10] = {0,0,0,0,0,0,0,0,0,0};
   long n;
   int i = 0;

   printf("Enter a number: ");
   scanf("%ld", &n);
   
   while(n > 0)
   {
      digit = n % 10;
      repeatedDigits[digit]++;
      n /= 10;  
   }
   
   printf("Digit:       ");
   
   for(i = 0; i <= 9; i++)
   {
      printf("%3d", i);
   }
   
   printf("\nOccurences:  ");
   
   for(i = 0; i <= 9; i++)
   {
      printf("%3d", repeatedDigits[i]);
   }

   getchar();
   getchar();
   
   return 0;
}