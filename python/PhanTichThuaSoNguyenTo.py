import math

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        for i in range(2, math.isqrt(n)+1):
            if n % i == 0:
                cnt = 0
                while n % i == 0:
                    cnt += 1
                    n //= i
                print(i, cnt, sep = "^", end = " * ")
