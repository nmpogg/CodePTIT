import math
def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        for i in range(n-1, 1, -1):
            if isPrime(i) and n % i == 0:
                print(n)
                break