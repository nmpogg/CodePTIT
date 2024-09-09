import math
def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return True


t = int(input())
for _ in range(t):
    s = input()
    ans = s[-4:]
    if(isPrime(int(ans))): print("YES")
    else: print("NO")