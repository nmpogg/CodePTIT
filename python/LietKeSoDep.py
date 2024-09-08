def checkTN(s):
    s = str(s)
    if len(s) % 2 == 1: return False
    for i in range(len(s)):
        if(s[i] != "0" and s[i] != "2" and s[i] != "4" and s[i] != "6" and s[i] != "8"): return False
        if(s[i] != s[len(s)-i-1]): return False
    return True
        
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        for i in range(n):
            if checkTN(i): print(i, end = " ")
        print()

