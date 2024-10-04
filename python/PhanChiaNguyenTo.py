import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0:
            return False
    return n > 1

if __name__ == "__main__":
    n = int(input())
    a = list()
    while len(a) < n:
        b = list(map(int, input().split()))
        a += b
    cnt = [0] * 1001
    for i in a:
        cnt[i] = 1
    b = list()
    l = 0
    r = 0
    for i in a:
        if cnt[i] == 1:
            b.append(i)
            r += i
            cnt[i] = 0
    flag = False
    for i in range(len(b)):
        l += b[i]
        r -= b[i]
        if isPrime(l) and isPrime(r):
            print(i)
            flag = True
            break
    if not flag:
        print('NOT FOUND')