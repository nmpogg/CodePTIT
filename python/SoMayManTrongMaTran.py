import math

def isTN(n):
    if n < 10: return False
    n = str(n)
    return n == n[::-1]

if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list()
    for i in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    minn = 1e9
    maxx = -1e9

    for i in a:
        for j in i:
            minn = min(minn, j)
            maxx = max(maxx, j)

    val = -1
    idx = list()
    for i in range(n):
        for j in range(m):
            if a[i][j] == maxx - minn:
                val = 1
                idx.append([i, j])
    if val == -1:
        print('NOT FOUND')
    else:
        print(maxx - minn)
        for x in idx:
            print('Vi tri [%d][%d]' %(x[0], x[1]))
