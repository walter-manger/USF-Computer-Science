
#include <stdio.h>

void GetInput(int *length, int *width, int *height);
int CalculateVolume(void);

int main()
{
   

   int v = CalculateVolume();
   
   printf("The volume of your input is %d", v);
   
   getchar();
   getchar();

   return 0;
}

void GetInput(int *length, int *width, int *height)
{
   printf("Enter length, width, height: ");
   scanf("%d,%d,%d", length, width, height);
}

int CalculateVolume(void)
{
   int l = 0, w = 0, h = 0;

   GetInput(&l,&w,&h);
   
   return l*w*h;
}