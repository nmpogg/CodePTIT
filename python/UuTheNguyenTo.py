import math
def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

def check(s):
    if not isPrime(len(s)): return False
    lst = {'2', '3', '5', '7'}
    cnt = 0
    for i in range(len(s)):
        if s[i] in lst: cnt += 1
    if cnt < len(s) - cnt: return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s): print("YES")
        else: print("NO")

3
1234567
22334455667
23400300489898989