from math import *

def check(n):
    sum = 0
    n1 = n
    while n1 > 0:
        sum += factorial(n1 % 10)
        n1 //= 10
    if sum == n: return True
    return False

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        if check(n): print("Yes")
        else: print("No")
