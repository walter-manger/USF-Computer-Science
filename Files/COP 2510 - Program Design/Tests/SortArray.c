
#include <stdio.h>

#define N 10

int main()
{
   int i = 0;
   int j = 0;
   int temp = 0;
   int nums[N] = {1, 3, 4, 5, 6, 8, 11, 22, 5, -1};
   
   for(i=0; i < (N-1); i++)
   {
      for(j = (i+1); j < N; j++)
      {
         /*
            if nums[1] < nums[0] then swap values
            if nums[2] < nums[0] then swap values
            ...
            if nums[10] < nums[0] then swap values
            
            Basically, if the next index's value is less than the current index's value, swap their values.
            
            Move on to the next base index.
            
            if nums[1] < nums[1] then swap values
            if nums[2] < nums[1] then swap values
            ...
            if nums[10] < nums[1] then swap values
            
         */
         if(nums[j] < nums[i])
         {
            temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
         }
      }
   }
   
   printf("Sorted Array:\n");
   
   for(i=0;i<N;i++)
   {
      printf("%4d", nums[i]);
   }
   

   getchar();
   getchar();

   return 0;
}
