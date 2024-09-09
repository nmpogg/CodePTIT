def check(s):
    if len(s) % 2 == 1: return False
    for i in range(len(s)):
        if (ord(s[i]) - 42) % 2 == 1: return False 
    s1 = s[::-1]
    if s != s1: return False
    return True

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        for i in range(n):
            if check(str(i)):
                print(i, end = " ")
        print()
