
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int roll_dice(void);
int play_game(void);

int main()
{

   char play_again = 'Y';
   int wins = 0;
   int losses = 0;

   while(toupper(play_again) == 'Y')
   {   
      if(play_game() == 1)
      {
         wins++;
      }
      else
      {
         losses++;
      }
      
      printf("\n\nPlay again? ");
      
      scanf("%c", &play_again);
      
      while(play_again != '\n')
      {
         scanf("%c", &play_again);
         
         printf("Your Input %d\n", play_again);
         
         if(play_again == '\n')
         {
            printf("Invalid Input!\n");
            printf("Enter shift amount (1-25): ");
            while(getchar() != '\n');
         }
      
      }
      
      printf("\n%c is %c", play_again, toupper(play_again));
   }
   
   printf("\n\nWins: %d\n", wins);
   printf("Losses: %d", losses);
   
   getchar();
   getchar();
   return 0;
}

int roll_dice()
{
   int random1 = rand() % 6;
   int random2 = rand() % 6;
   
   return random1 + random2;
}

int play_game()
{
   int roll = 0;
   int isWin = -1;
   int current_point = 0;
   int roll_count = 0;
   
   while(isWin == -1)
   {
      roll = roll_dice();
      printf("You rolled: %d\n", roll);
   
      if(roll_count == 0)
      {
         switch(roll)
         {
            case 7: 
            case 11: 
               printf("You win!\n");
               isWin = 1;
               break;
            case 2:
            case 12: 
               printf("You lose!\n");
               isWin = 0;
               break;
            default:  
               current_point = roll;
               break;
         }
      }
      else
      {
         if(roll == current_point)
         {
            printf("You win!\n");
            isWin = 1;
         }
         else if (roll == 7)
         {
            printf("You lose!\n");
            isWin = 0;
         }
      }
       
      roll_count += 1;    
   }
   
   return isWin;  
}