n = int(input())
a = list(map(int, input().split()))
a.sort()
for i in a:
    if i + 1 not in a:
        print(i+1)
        break