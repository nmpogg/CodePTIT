if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, k = map(int, input().split())
        c = 65
        s = 'A'
        for i in range(1, n):
            s = s + chr(c+i) + s
        print(s[k-1])