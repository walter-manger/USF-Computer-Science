
#include <stdio.h>

#define N 10

int GetLargestElement(int a[], int n);
int GetAverageOfAllElements(int a[], int n);
int GetNumberOfPositiveElements(int a[], int n);

int main()
{
   int n = N;
   int a[N] = {1,2,3,4,5,6,7,8,9,10};

   printf("Largest element in Array a is %d\n", GetLargestElement(a,n));
   printf("Average of all elements in Array a is %d\n", GetAverageOfAllElements(a,n));
   printf("Number of positive elements Array a is %d\n", GetNumberOfPositiveElements(a,n));
   
   getchar();
   getchar();

   return 0;
   
}

int GetLargestElement(int a[], int n)
{
   int i = 0;
   int largestNumber = 0;
   
   for(i=0;i<n;i++)
   {
      if(a[i] > largestNumber)
      {
         largestNumber = a[i];
      }
   }
   
   return largestNumber;
}

int GetAverageOfAllElements(int a[], int n)
{
   int i = 0;
   int sum = 0;
   
   for(i=0;i<n;i++)
   {
      sum += a[i];
   }
   
   return sum/n;
}

int GetNumberOfPositiveElements(int a[], int n)
{
   int i = 0;
   int positiveElementsCount = 0;
   
   for(i=0;i<n;i++)
   {
      if(a[i] % 2)
      {
         positiveElementsCount++;
      }
   }
   
   return positiveElementsCount;
}