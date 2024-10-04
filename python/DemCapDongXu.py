if __name__ == "__main__":
    n = int(input())
    a = list()
    for _ in range(n):
        b = input()
        a.append(b)
    ans = 0
    for i in range(n):
        for j in range(n):
            if a[i][j] == 'C':
                for x1 in range(i+1, n):
                    if a[x1][j] == 'C':
                        ans += 1
                for x2 in range(j+1, n):
                    if a[i][x2] == 'C':
                        ans += 1
    print(ans)