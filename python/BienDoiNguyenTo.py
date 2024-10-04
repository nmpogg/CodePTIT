p = [1] * 10001
p[0] = p[1] = 0
for i in range(101):
    if p[i] == 1:
        for j in range(i*i, 10001, i):
            p[j] = 0

l = [0] * 10001
l[0] = l[1] = l[2] = 2
for i in range(3, 10001):
    if p[i] == 0:
        l[i] = l[i-1]
    else: l[i] = i

r = [0] * 10001
r[0] = r[1] = r[2] = 2
for i in range(9973, 0, -1):
    if p[i] == 0:
        r[i] = r[i+1]
    else: r[i] = i

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    ans = -1
    for i in a:
        res = min(i - l[i], r[i] - i)
        ans = max(ans, res)
    print(ans)