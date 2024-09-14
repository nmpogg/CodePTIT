import math

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a = int(input())
        b = int(input())
        print(math.gcd(a, b))