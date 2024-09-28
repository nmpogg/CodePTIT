import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

if __name__ == "__main__":
    n, m = map(int, input().split())
    a = []
    for i in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    for i in a:
        for j in i:
            if isPrime(j):
                print(1, end = ' ')
            else: print(0, end = ' ')
        print()

