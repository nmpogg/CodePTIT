def checkKhongGiam(s):
    for i in range(len(s)-1):
        if(s[i] > s[i+1]): return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if(checkKhongGiam(s)): print("YES")
        else: print("NO")
        