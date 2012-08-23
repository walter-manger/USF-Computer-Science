# Name: Walter Manger (U54576622)
# File: craps.py
# Assigmnent 3 - Allow the user to play as many games and he or she wants.
# I've added functionality to keep track of the wins and report at the end of the program

import random

def roll_and_report():
    die1 = random.randint(1,6)
    die2 = random.randint(1,6)
    total = die1 + die2
    print('\ndie1: ', die1, '\ndie2: ', die2, '\ntotal: ', total, '\n')
    return total

def play_game():
    print("Here we go with your first roll.")
    total = roll_and_report()
    if total == 7 or total == 11:
        print("Congratulations! You won the game on the first roll.\n")
        return 1 # Scorekeeping
    elif total == 2 or total == 3 or total == 12:
        print("Uh-oh, you lost the game on the first roll!\n")
        return 0 # Scorekeeping
    else:
        input("Hit enter to continue\n")
        point = total
        print("You must roll a total of ", point, " to win")
        print("If you roll a 7 before ", point, ", you lose")
        input("\nHit enter to continue")
        total = roll_and_report()
        while total != 7 and total != point:
            total = roll_and_report()
            input("\nHit enter to continue")
        if total == 7:
            print('\nGame over, you lose')
            return 0
        else:
            print("\nYou hit the point, you win!")
            return 1

# Begin the game
print("\n\nWelcome to the Casino game of craps")

wins = play_game()
games_played = 1

prompt_string = "\n\nWould you like to play again? (Y or N): " 

answer = input(prompt_string)

while answer.lower() == 'y':
    games_played += 1
    wins += play_game()
    answer = input(prompt_string)

print("\nYou've won ", wins, " out of ", games_played, " games.")
print("That's a ", (wins/games_played)*100, "% win rate.\n")
print("\n\nThanks for playing! Goodbye!\n\n")

    

