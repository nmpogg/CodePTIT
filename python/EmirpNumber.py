import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

def isEmirpNum(n, val):
    if not isPrime(n): return False
    n = str(n)
    res = n[::-1]
    if n == res: return False
    if int(res) >= val or not isPrime(int(res)):
        return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        for i in range(10, n):
            if isEmirpNum(i, n):
                print(i, end = ' ')
        print()