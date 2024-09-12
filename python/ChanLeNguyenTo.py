import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return True

def check(s):
    ans = 0
    for i in range(len(s)):
        if(i % 2 == 0):
            if int(s[i]) % 2 == 1: return False
        else:
            if int(s[i]) % 2 == 0: return False
        ans += int(s[i])
    if isPrime(ans): return True
    return False

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s):
            print("YES")
        else: print("NO")
    