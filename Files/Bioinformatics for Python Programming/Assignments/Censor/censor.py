# Walter Manger 54576622

import random

class Censor:
    def __init__(self,replacers='!@$%&?', badwords=[]):
        self.badwords = badwords
        self.replacers = replacers        

    def input_badwords(self,fpath):
        # build the self.badwords list from file of whitespace separated words
        with open(fpath, 'r') as f:
            badword_list = f.read().split(' ')
        self.badwords = [w for w in set([word.strip().lower() for word in badword_list])]

    def output_badwords(self,fpath):
        # store the self.badwords list in file, separated by spaces
        with open(fpath, 'w') as f:
            f.write(' '.join(self.badwords))

    def addwords(self,word_list):
        # add words from word_list to self.badwords
        self.badwords = [w for w in set(self.badwords) | set(word_list)]

    def remove_words(self,word_list):
        # remove words in word_list from self.badwords
        for word in word_list:
            if word in self.badwords:
                i = self.badwords.index(word)
                self.badwords.remove(self.badwords[i])
    
    def censor_word(self,n):
        # return a length-n word composed of randomly chosen
        # symbols from self.replacers
        new_word = []
        for i in range(n):
            random_char = random.choice(self.replacers)
            if i > 0:  # Stops the replacement chars from repeating
                while random_char == new_word[i-1]:
                    random_char = random.choice(self.replacers)
            new_word.append(random_char)
        return ''.join(new_word)

    def censor_file(self,fpath):
        # Write a new file named fpath+'.censored' whose contents are the contents of the
        # file at fpath with each word that is in self.badwords replaced by an equal-length
        # word of randomly chosen letters from self.replacers
        words_in_file = []
        with open(fpath, 'r') as f:
            words_in_file = f.read().split(' ')

        with open(fpath + '.censored', 'w') as f:
            f.write(' '.join([self.censor_word(len(word)) if word.lower() in self.badwords else word for word in words_in_file]))


if __name__ == "__main__":
    print("Welcome to Censor.py. \nPlease enter your Censored Words File and your File to be censored below:")
    censorDictionaryFile = input("Censored Words Filename: ")
    adverseFile = input("File to be censored Filename: ")

    c = Censor()

    c.input_badwords(censorDictionaryFile)

    c.output_badwords('test.badwords')

    c.addwords(['recently', 'badword2', 'remove_word'])

    c.remove_words(['remove_word'])

    c.censor_file(adverseFile)

    print(adverseFile + '.censored written')
