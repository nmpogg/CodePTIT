import math

def isPrime( n):
    for i in range(2, math.isqrt(n)+1, 1):
        if n % i == 0: return False
    return n > 1

t = int(input())
for i in range(t):
    n = int(input())
    k = 0
    for j in range(1, n, 1):
        if(math.gcd(j, n) == 1): k += 1
    if(isPrime(k)): print("YES")
    else: print("NO")
    
    