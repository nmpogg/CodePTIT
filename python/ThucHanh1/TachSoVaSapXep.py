if __name__ == "__main__":
    t = int(input())
    a = []
    for _ in range(t):
        s = input()
        s = '@' + s
        s += '@'
        res = 0
        for i in range(1, len(s)):
            if s[i].isdigit():
                res = res * 10 + int(s[i])
            elif s[i-1].isdigit(): 
                a.append(res)
                res = 0
    a.sort()
    for i in a:
        print(i)    
     
