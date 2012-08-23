/*

   User Management, using a Stack with a LinkList implementation.

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct stackEntry {
   int UserID;
   //char *UserName; 
} StackEntry;

typedef struct stackNode {
   StackEntry Entry;
   struct stackNode *Next;
} StackNode; 

typedef struct stack{
   int count; 
   StackNode *top;
} Stack;

int CreateUser(int userId, StackEntry *User);
int Init(Stack *S);
int Push(Stack *S, StackEntry entry);
int Pop(Stack *S, StackEntry *entry);
int Top(Stack *S, StackEntry *entry);
int StackIsFull(const Stack *S);
int StackIsEmpty(const Stack *S);

int main()
{
   StackEntry *User;
    
   CreateUser(1, User);
   
   // Push to Stack, Create another
   
   //CreateUser(2, User);
   
   if(User == NULL)
   {
      printf("User is not initialized!");
      getchar();
      return 0;
   }
   
   printf("UserID: %d Created", User->UserID);
   
   
   getchar();
   getchar();
   return 0;
}

int CreateUser(int userId, StackEntry *User)
{
   StackEntry *entry = malloc(sizeof(StackEntry));
   
   if(entry == NULL)
   {
      printf("Could not allocate memory to create a user");
      return 0;
   }
   
   entry->UserID = userId;
   
   printf("Entry UserID is %d\n", entry->UserID);
   
   User = entry;
   
   printf("User UserID is %d\n", User->UserID);
   
   return 1;
}

/* Stack Management, Uses a LinkList */
int Init(Stack *S)
{
   S->top = NULL;
   S->count = 0;
   return 1;
}

int Push(Stack *S, StackEntry entry)
{
   StackNode *tmp = malloc(sizeof(StackNode));
   
   if(tmp == NULL)
   {
      printf("Could not allocate memory for a new StackNode");
      return 0;
   }

   if(StackIsFull(S) == 0)
   {
      printf("Cannot Push user on to stack, stack is full!");
      return 0;
   }
   
   S->count++;
   tmp->Entry = entry;
   tmp->Next = S->top;
   S->top = tmp;
   return 1;
}

int Pop(Stack *S, StackEntry *entry)
{  
   if(StackIsEmpty(S))
   {
      printf("No items in stack, nothing to pop");
      return 0;
   }
   
   StackEntry *tmp = &S->top->Entry;
   
   S->count--;
   S->top = S->top->Next;
   *entry = S->top->Entry;
   //free(&tmp->Entry->UserName);
   free(tmp);
   tmp = NULL;
   return 1;
}


int Top(Stack *S, StackEntry *entry)
{
   if(StackIsEmpty(S))
   {
      printf("Stack is empty, has no top");
      return 0;
   }

   *entry = S->top->Entry;
   return 1;
}

int StackIsFull(const Stack *S)
{
   StackNode *tmp = malloc(sizeof(StackNode));
   
   if(tmp == NULL)
   {
      return 1;
   }
   else 
   {
      free(tmp);
      return 0;
   } 
}

int StackIsEmpty(const Stack *S)
{
   if(S->top == NULL)
      return 1;
   else
      return 0;
}



