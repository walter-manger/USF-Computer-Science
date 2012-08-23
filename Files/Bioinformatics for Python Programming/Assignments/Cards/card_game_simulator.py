# Walter Manger 54576622 

from deck import Deck
from poker_hand import Hand
      
if __name__ == '__main__':
    player_names = ['Terry','Ed','Ralph','Bernie']
    player_hands = {}
    for p in player_names:
        player_hands[p] = None
    # Write code to do the following:
    # Deal four hands:
    d = Deck()
    d.shuffleDeck()
    # first for Terry, second for Ed, third for Ralph and fourth for Bernie
    # Then print, for each player, the player's name and the poker description
    # of the player's hand.  One line per player.
    for p in player_names:
        player_hands[p] = d.dealHand()
        print(p.ljust(8, ' '), player_hands[p].poker_description())
        
    Freq = {}
    for t in ['Royal Flush','Straight Flush','Four of a Kind','Full House',
        'Flush', 'Straight', 'Three of a Kind','Two Pair','Pair',
        'High Card']:
        Freq[t] = 0

    for i in range(25000):
        # Fill in the code for the following:
        # generate a random hand
        # and add one to the entry in Freq
        # corresponding to the poker description
        # of the hand
        infinity_deck = Deck()
        infinity_deck.shuffleDeck()
        h = infinity_deck.generateRandomHand()
        Freq[h.poker_description()] = Freq[h.poker_description()] + 1 

    # print the dictionary Freq, with one line for each item.
    # should give you an idea of how often various hand values
    # occur when playing poker!
    print() # Some Separation
    for key in Freq.keys():
        print(key.ljust(15, ' '), Freq[key])
