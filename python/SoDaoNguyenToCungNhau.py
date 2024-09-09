import math

def check(s):
    n1 = int(s)
    a = s[::-1]
    n2 = int(a)
    if math.gcd(n1, n2) == 1: return True
    return False

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s): print("YES")
        else: print("NO")