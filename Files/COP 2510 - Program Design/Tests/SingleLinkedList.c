
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERNAME 20

typedef struct node {
   char *UserName;
   struct node *next;
} Node;

void GetInput(Node **head);
void AddToList(Node **head, char *UserName);
void PrintList(Node *head);
Node *CreateNode(char *UserName, Node *next);
Node *FindNode(char *UserName, Node *head);
void CleanString(char *p);

int main()
{
   // Initialize Head
   Node *head = NULL;
   Node *foundNode = NULL;
   
   GetInput(&head);
   PrintList(head);
   
   printf("\nFinding Node: testing2\n");
   
   foundNode = FindNode("testing2",head);
   if(foundNode != NULL)
      printf("testing2 was found!\n");
   
   getchar();
   getchar();
   return 0;
}

// Prompt a user for a UserName
void GetInput(Node **head)
{
   int length = 0;
   char input_buffer[MAX_USERNAME];

   printf("Enter Some UserNames:\n");
   
   while(input_buffer[0] != '\n')
   {
      fgets(input_buffer,MAX_USERNAME,stdin);
      if(input_buffer[0] != '\n')
      {
         length = strlen(input_buffer);
         input_buffer[length-1] = 0;
         AddToList(head,input_buffer);
      }
        
         
   }
}

void AddToList(Node **head, char *UserName)
{ 
   *head = CreateNode(UserName, *head);
}

void PrintList(Node *head)
{
   Node *tmp = head;
   
   printf("Here is the current list of entered users: \n");
   
   while(tmp != NULL)
   {
      printf("UserName: %s\n", tmp->UserName);
      tmp = tmp->next;
   }
}

Node *CreateNode(char *UserName, Node *next)
{
   Node *new_node = malloc(sizeof(Node));
   
   if(new_node == NULL)
   {
      printf("Could not allocate the memeory for the new node");
      return NULL;
   }
   
   new_node->UserName = malloc(strlen(UserName)+1);
   
   if(new_node->UserName == NULL)
   {
      printf("Could not allocate the memeory for the new node UserName");
      return NULL;
   }
   
   strcpy(new_node->UserName, UserName);
 
   new_node->next = next;
   return new_node;
}

Node *FindNode(char *UserName, Node *head)
{
   Node *tmp = head;
   char *un = malloc(strlen(UserName) + 1);
   strcpy(un,UserName);
   
   while(tmp != NULL)
   {
      //printf("UserName: %s, tmp->UserName: %s", UserName, tmp->UserName);
   
      if(strcmp(UserName,tmp->UserName) == 0)
      {
         free(un);
         return tmp;
      }
         
      tmp = tmp->next;
   }
   
   free(un);
   return NULL;
}

void RemoveNode(char *UserName, Node **head)
{
   Node *currentNode = *head;
   Node *currentNextNode = (**head).next;
   char *un = malloc(strlen(UserName) + 1);
   strcpy(un,UserName);
   
   if(!strcmp(UserName,currentNode->UserName))
   {
      printf("Removing %s", UserName);
      free(un);
      return;
   }
   else
   {
      while(currentNextNode != NULL)
      {
         if(strcmp(UserName,currentNextNode->UserName))
         {
            free(un);
            return;
            
         }
         
         currentNode = currentNode->next; //Previous Entry
         currentNextNode = currentNextNode->next;
      }
   }
}

