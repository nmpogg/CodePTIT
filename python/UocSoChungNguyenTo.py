import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

def sumDigit(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

t = int(input())
for _ in range(t):
    s = input()
    a, b = map(int, s.split())
    if(isPrime(sumDigit(math.gcd(a, b)))): print("YES")
    else: print("NO")


