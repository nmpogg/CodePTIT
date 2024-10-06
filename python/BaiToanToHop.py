a = []
X = []

def Try(i, n, k):
    for j in range(X[i-1]+1, n+1):
        X[i] = j
        if i == k:
            for idx in range(1, k+1):
                print(a[X[idx] - 1], end = ' ')
            print()
        else: Try(i+1, n, k)

if __name__ == "__main__":
    n, k = map(int, input().split())
    a = list(set(map(int, input().split())))
    a.sort()
    X = [0] * (k + 1)
    Try(1, len(a), k)
