import math

def isPrime(n):
    for i in range(2, math.isqrt(n)+1):
        if n % i == 0: return False
    return n > 1

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
            if isPrime(a[i][j]) and a[i][j] > val:
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
