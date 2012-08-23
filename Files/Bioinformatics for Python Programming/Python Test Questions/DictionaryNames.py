
S = input("Enter your string: ")
St = set(S.split())
D = {}

print()

for word in St:
    D[word] = S.count(word)

for key in sorted(D.keys()):
    print(key, D[key], sep='\t', end='\n\n')
