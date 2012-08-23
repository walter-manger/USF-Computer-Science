
#include <stdio.h>
#define STACK_SIZE 100

void make_empty(void);
int is_empty(void);
int is_full(void);

int top = 0;
int *top_ptr = &top;

int main()
{
   //top_ptr = &top;
   getchar();
   getchar();
   return 0;
   
}

void make_empty(void)
{
   *top_ptr = 0;
}

int is_empty(void)
{
   return *top_ptr == 0;
}

int is_full(void)
{
   return *top_ptr == STACK_SIZE;
}