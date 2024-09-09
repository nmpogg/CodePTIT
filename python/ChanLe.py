def check(s):
    sum = 0
    for i in range(len(s)-1):
        sum += ord(s[i]) - 48
        if abs(ord(s[i]) - ord(s[i+1])) != 2: return False
    if (sum + ord(s[len(s)-1]) - 48) % 10 != 0: return False
    return True
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if(check(s)): print("YES")
        else: print("NO")