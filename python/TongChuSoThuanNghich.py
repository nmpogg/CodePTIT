def checkTN(s):
    if len(s) < 2: return False
    for i in range(len(s)//2):
        if s[i] != s[len(s)-i-1]: return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        ans = 0
        for i in range(len(s)):
            ans += ord(s[i]) - 48
        if checkTN(str(ans)): print("YES")
        else: print("NO")