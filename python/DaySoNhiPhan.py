n = int(input())
s = input()
a = map(int, s.split())
ans = 0
for i in range(1, n):
    if a[i] == a[i-1]: ans += 1