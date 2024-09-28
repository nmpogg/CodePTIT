a = set(lambda x : str(x).lower(), input().split())
b = set(lambda x : str(x).lower(), input().split())
c = a.union(b)
d = a.intersection(b)
for i in c:
    print(i, end = ' ')
print()
for i in d:
    print(i, end = ' ')