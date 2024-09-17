from math import *

def isPrime(n):
    for i in range(2, isqrt(n)+1):
        if n % i == 0: return False
    return True

def isPerfectPrime(n):
    s = str(n)
    if not isPrime(n): return False
    sum = 0
    for i in range(len(s)):
        if(s[i] != "2" and s[i] != "3" and s[i] != "5" and s[i] != "7"): return False
        sum += int(s[i])
    if not isPrime(sum): return False
    s1 = s[::-1]
    if not isPrime(int(s1)): return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        if isPerfectPrime(n): print("Yes")
        else: print("No")