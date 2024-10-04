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
    val = -1
    idx = list()
    for i in range(n):
        for j in range(m):
            if isTN(a[i][j]) and a[i][j] > val:
                val = a[i][j]
                idx.clear()
                idx.append([i, j])
            elif a[i][j] == val:
                idx.append([i, j])
    if val == -1:
        print('NOT FOUND')
    else:
        print(val)
        for x in idx:
            print('Vi tri [%d][%d]' %(x[0], x[1]))