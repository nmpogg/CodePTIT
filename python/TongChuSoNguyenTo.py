import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        ans = 0
        for i in range(len(s)):
            ans += ord(s[i]) - 48
        if isPrime(ans): print("YES")
        else: print("NO")