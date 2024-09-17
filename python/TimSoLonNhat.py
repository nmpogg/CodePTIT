
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        s += '@'
        ans = -1
        res = 0
        for i in range(len(s)):
            if s[i].isdigit():
                res = res * 10 + int(s[i])
            else:
                ans = max(ans, res)
                res = 0
        print(ans)
