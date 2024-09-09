import math

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(1, end = "")
        for i in range(2, math.isqrt(n)+1):
            if n % i == 0:
                cnt = 0
                while n % i == 0:
                    cnt += 1
                    n //= i
                print(' * ' + str(i) + '^' + str(cnt), end = '')
        if n > 1: print(' * ' + str(n) + '^1', end = '')
        print()

