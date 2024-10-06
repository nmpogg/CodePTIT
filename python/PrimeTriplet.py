p = [True] * 1000001
p[0] = p[1] = False
for i in range(2, 1001):
    if p[i]:
        for j in range(i+i, 1000001, i):
            p[j] = False

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        ans = 0
        for i in range(1, n-6):
            if p[i] and (p[i+2] or p[i+4]) and p[i+6]:
                ans += 1
        print(ans)