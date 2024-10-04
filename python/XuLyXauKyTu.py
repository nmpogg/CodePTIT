a = set(input().lower().split())
b = set(input().lower().split())
c = list(a.union(b))
d = list(a.intersection(b))
for i in sorted(c):
    print(i, end = ' ')
print()
for i in sorted(d):
    print(i, end = ' ')
