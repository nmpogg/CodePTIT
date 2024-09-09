
def checkTangGiam(s):
    if len(s) < 3: return False
    idx = -1
    for i in range(len(s)-1):
        if s[i] >= s[i+1]:
            idx = i
            break
        
    for i in range(idx, len(s)-1):
        if s[i] <= s[i+1]: return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = input()
        if checkTangGiam(n): print("YES")
        else: print("NO")
