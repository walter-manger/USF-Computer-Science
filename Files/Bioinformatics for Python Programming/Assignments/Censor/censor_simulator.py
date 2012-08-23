
from censor import Censor

print("Welcome to Censor.py. \nPlease enter your Censored Words File and your File to be censored below:")
censorDictionaryFile = input("Censored Words Filename: ")
adverseFile = input("File to be censored Filename: ")

c = Censor()

c.input_badwords(censorDictionaryFile)

c.output_badwords('test.badwords')

c.addwords(['recently', 'badword2', 'remove_word'])

c.remove_words(['remove_word'])

c.censor_file(adverseFile)

