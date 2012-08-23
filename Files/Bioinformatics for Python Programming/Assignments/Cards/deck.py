# deck.py
#   class to represent a deck of cards during a game of poker

import random,sys
from card import Card
from poker_hand import Hand

# List of cards as found when a new deck is opened.
newDeckList = []
for s in ['c','d','h','s']:
    for r in range(1,14):
        newDeckList.append(Card(r,s))

class Deck:
    def __init__(self,cardList=newDeckList):
        self.cardList = cardList
        self.top = 0

    def open_new_deck(self):
        self.cardList = newDeckList

    def shuffleDeck(self):
        random.seed()
        random.shuffle(self.cardList)

    def dealHand(self):  
        if len(self.cardList) < 5:
            return None
        self.top += 5
        return Hand(self.cardList[self.top-5:self.top])

    def cards_left(self):
        return 52-self.top

    def generateRandomHand(self):
        # cards not removed from Deck; no need to shuffle
        L = random.sample(self.cardList,5)
        return Hand(L)


if __name__ == '__main__':
    mydeck = Deck()
    print('New deck has',mydeck.cards_left(),'cards in the deck')
    print('Now shuffle the cards and deal a hand:')
    mydeck.shuffleDeck()
    myhand = mydeck.dealHand()
    print()
    print(myhand)
    print()
    print('That leaves',mydeck.cards_left(),'cards in the deck')
    print()
    mydeck.open_new_deck()
    print('Opened a new deck of cards')
    print('Lets generate a random hand without removing the cards')
    newhand = mydeck.generateRandomHand()
    print()
    print(newhand)
    
    
    
    
