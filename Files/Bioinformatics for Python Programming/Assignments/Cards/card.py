# card.py
#  defines a minimal class to represent poker cards

class Card:
    '''Represents cards from a poker deck.  The rank is an integer
    between 1 and 13 and the suit is one of 'c','d','h','s'.
    '''
    def __init__(self,rank,suit):
        self.rank = rank
        self.suit = suit

    def getRank(self):
        return self.rank

    def getSuit(self):
        return self.suit

    def BJValue(self):  # Blackjack card value
        if self.rank <= 10:
            return self.rank
        else:
            return 10

    def __str__(self):
        s = ''
        if self.rank == 1:
            s += 'Ace'
        elif 2 <= self.rank <= 10:
            s += str(self.rank)
        elif self.rank == 11:
            s += 'Jack'
        elif self.rank == 12:
            s += 'Queen'
        else:
            s += 'King'

        s += ' of '

        if self.suit == 'c':
            s += 'Clubs'
        elif self.suit == 'd':
            s += 'Diamonds'
        elif self.suit == 'h':
            s += 'Hearts'
        else:
            s += 'Spades'
        return s


    def __lt__(self,other):
        if self.rank == other.rank:
            return self.suit < other.suit
        elif self.rank == 1:
            return False
        elif other.rank == 1:
            return True
        else:
            return self.rank < other.rank

    def __eq__(self,other):
        return self.rank == other.rank and self.suit == other.suit




if __name__ == "__main__":
    c = Card(1,'s')
    d = Card(11,'d')
    e = Card(8,'h')
    print()
    print(c)
    print(d)
    print(e)
    print(c,'<',d,':',c < d)
    print(d,'<',c,':',d < c)
    print(c,'==',c,':',c == c)
    print(c,'==',d,':',c == d)
 
