import math
def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

t = int(input())
for _ in range(t):
    s = input()
    if isPrime(int(s[-4:])):
        print("YES")
    else: print("NO")
