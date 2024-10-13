
if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list()
    for _ in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    if n > m:
        for i in range(n):
            if i % 2 == 1:
                for j in range(m):
                    print(a[i][j], end = ' ')
                print()
    elif m > n:
        for i in range(n):
            for j in range(m):
                if j % 2 == 0:
                    print(a[i][j], end = ' ')
            print()
    else:
        for i in range(n):
            for j in range(m):
                print(a[i][j], end =' ')
            print()