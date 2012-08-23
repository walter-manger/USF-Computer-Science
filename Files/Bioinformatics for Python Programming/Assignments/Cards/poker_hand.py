# Walter Manger 54576622

# poker_hand.py
#   class to represent a hand occurring in a poker game

from card import Card

class Hand:
    def __init__(self,card_list):
        self.cards = card_list # must have length 5

    def maxRank(self):
        # returns a card of maximum rank in self.card_list
        # if more than one card has that rank, returns the
        # card with the highest suit
        # where 'c' < 'd' < 'h' < 's'
        # (which is just the alphabetic order!)
        max_rank = 0;
        max_rank_suit = 'c'
        max_rank_cards = [] 

        for c in self.cards:
            max_rank = 1 if c.getRank() == 1 else c.getRank() if c.getRank() > max_rank and max_rank != 1 else max_rank
            max_rank_suit = c.getSuit() if c.getSuit() > max_rank_suit else max_rank_suit
        print('max rank', max_rank)
        print('max rank suit', max_rank_suit)
        print([c for c in self.cards if c.getRank() == max_rank])
        return [c for c in self.cards if c.getRank() == max_rank].pop()
   

    def poker_description(self):
        # returns one of the following strings:
        # 'Royal Flush','Straight Flush','Four of a Kind','Full House',
        # 'Flush', 'Straight', 'Three of a Kind','Two Pair','Pair',
        # 'High Card'
        list_of_ranks = [c.getRank() for c in self.cards]
        list_of_suits = [c.getSuit() for c in self.cards]

        unique_ranks = set(list_of_ranks)
        unique_suits = set(list_of_suits)

        # Definition of a Straight for the min_rank in list_of_ranks
        straight = []
        min_rank = sorted(list_of_ranks)[0] - 1
        for i in range(5):
            min_rank = min_rank + 1
            straight.append(min_rank)

        if len(unique_suits) == 1: 
            if len(set([1, 10, 11, 12, 13]) - set(list_of_ranks)) == 0:
                return 'Royal Flush'
            else:
                if len(set(straight) - set(list_of_ranks)) == 0:
                    return 'Straight Flush'
                else:
                    return 'Flush'

        if len(set(straight) - set(list_of_ranks)) == 0:
            return 'Straight'

        rank_counts = [list_of_ranks.count(r) for r in unique_ranks]

        if rank_counts.count(4) == 1:
            return 'Four of a Kind'
        elif rank_counts.count(3) == 1:
            if rank_counts.count(2) == 1:
                return 'Full House'
            else:
                return 'Three of a Kind'
        elif rank_counts.count(2) == 2:
            return 'Two Pair'
        elif rank_counts.count(2) == 1:
            return 'Pair'
        else:
            return 'High Card'

    def __str__(self):
        return '\n'.join([str(c) for c in self.cards])


        
if __name__ == "__main__":
    Royal_Flush = [Card(1, 'd'), Card(10, 'd'), Card(11, 'd'), Card(12, 'd'), Card(13, 'd')]
    Straigh_Flush = [Card(7, 'd'), Card(6, 'd'), Card(5, 'd'), Card(4, 'd'), Card(3, 'd')]
    Four_Of_A_Kind = [Card(7, 'c'), Card(7, 'h'), Card(7, 's'), Card(7, 'd'), Card(3, 'd')]
    Three_Of_A_Kind = [Card(7, 'c'), Card(7, 'h'), Card(7, 's'), Card(9, 'd'), Card(3, 'd')]
    Full_House = [Card(2, 'c'), Card(2, 'h'), Card(2, 'd'), Card(8, 's'), Card(8, 'h')]
    Flush = [Card(2, 'c'), Card(5, 'c'), Card(6, 'c'), Card(8, 'c'), Card(10, 'c')]
    Straight = [Card(2, 's'), Card(3, 's'), Card(4, 'd'), Card(5, 'd'), Card(6, 'h')]
    Two_Pair = [Card(2, 's'), Card(2, 'h'), Card(4, 'd'), Card(4, 'c'), Card(6, 'h')]
    One_Pair = [Card(2, 's'), Card(2, 'h'), Card(4, 'd'), Card(5, 'd'), Card(6, 'h')]
    High_Card = [Card(2, 's'), Card(3, 'h'), Card(4, 'd'), Card(5, 'd'), Card(10, 'h')]
    
    Hand_Types = [Royal_Flush, Straigh_Flush, Four_Of_A_Kind, Three_Of_A_Kind, Full_House, Flush, Straight, Two_Pair, One_Pair, High_Card]

    for Hand_Type in Hand_Types:
        h = Hand(Hand_Type)
        print(h)
        print('Max Rank:', h.maxRank())
        print('Hand Description:', h.poker_description())
        print('\n')
    
