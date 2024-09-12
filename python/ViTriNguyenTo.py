import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

def check(s):
    for i in range(len(s)):
        if isPrime(i) and not isPrime(int(s[i])): return False
        if not isPrime(i) and isPrime(int(s[i])): return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s):
            print("YES")
        else: print("NO")