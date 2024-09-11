import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0:
            return False
    return n > 1

def check(s):
    if not isPrime(len(s)): return False
    cntPr = 0
    cntM = 0
    for i in range(len(s)):
        if s[i] =='2' or s[i] == '3' or s[i] == '5' or s[i] == '7': cntPr += 1
        else: cntM += 1
    if cntPr > cntM: return True
    return False
       

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s): print("YES")
        else: print("NO")