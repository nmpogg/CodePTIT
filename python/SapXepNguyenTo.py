import math

prime = [True] * 1001
prime[0] = prime[1] = False
for i in range(2, math.isqrt(1000)+1):
    if prime[i]:
        for j in range(i * i, 1001, i):
            prime[j] = False

if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n-1):
        for j in range(i + 1, n):
            if prime[a[i]] and prime[a[j]] and a[i] > a[j]:
                    a[i], a[j] = a[j], a[i]
    for i in a:
        print(i, end = ' ')