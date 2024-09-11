def Tich(s):
    ans = 1
    for i in range(len(s)):
        if s[i] != '0':
            ans *= (ord(s[i]) - 48)
    return ans
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        print(Tich(s))
