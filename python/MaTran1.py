if __name__ == "__main__":
    n = int(input())
    a = list()
    for i in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    k = int(input())
    up = down = 0
    for i in range(n):
        for j in range(i):
            up += a[i][j]
            down += a[j][i]
    res = abs(up - down)
    if (res) <= k:
        print("YES", res, sep = '\n')
    else:
        print("NO", res, sep = '\n')
