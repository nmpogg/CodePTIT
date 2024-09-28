if __name__ == "__main__":
    n = int(input())
    a = list()
    for i in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    k = int(input())
    up = down = 0
    for i in range(n):
        for j in range(n):
            if i + j + 1 < n: up += a[i][j]
            elif i + j + 1 > n: down += a[i][j]
    res = abs(up - down)
    if res <= k:
        print("YES")
    else:
        print("NO")
    print(res)