
S = input("Enter a string: ")
L = [c.lower() for c in S if c.isalpha()]
K = set(L)

print("Total number of alphabetic characters:", len(K), end='\n\n')

for ch in K:
    print(ch, S.lower().count(ch), S.lower().count(ch)/len(K), sep='\t', end='\n\n') 
