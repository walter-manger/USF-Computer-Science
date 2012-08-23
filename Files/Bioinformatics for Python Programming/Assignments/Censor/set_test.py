a = ['a', 'b', 'a', 'b', 'c']
b = ['a', 'd', 'e', 'b']
print(a)
a = [c for c in set(a) | set(b)]
print(a)
