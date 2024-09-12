import math

def isPrime(n):
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0: return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        l = s[:3]
        r = s[-3:]
        if isPrime(int(l)) and isPrime(int(r)): print("YES")
        else: print("NO")

3
12743
7337
12345678901234