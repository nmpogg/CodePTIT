p = [1] * 1000001
p[0] = p[1] = 0
for i in range(1001):
    if p[i] == 1:
        for j in range(i*i, 1000001, i):
            p[j] = 0

n = int(input())
a = list(map(int, input().split()))
cnt = [0] * 1000001
for i in a:
    if p[i] == 1:
        cnt[i] += 1
for i in a:
    if p[i] and cnt[i] != 0:
        print(i, cnt[i])
        cnt[i] = 0