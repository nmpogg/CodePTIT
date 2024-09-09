import math

def check(s):
    a = []
    for i in range(len(s)):
        if(s[i] not in a):
            a.append(s[i])
            if len(a) > 2: return False
    for i in range(len(s)- 2):
        if s[i] != s[i+2]: return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s): print("YES")
        else: print("NO")
