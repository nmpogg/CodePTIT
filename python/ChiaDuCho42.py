a = []
while(len(a) < 10):
    s = input()
    b = list(map(int, s.split()))
    a += b

ans = set()
for i in a:
    ans.add(i % 42)
print(len(ans))
    