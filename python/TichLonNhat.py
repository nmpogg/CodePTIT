if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    ans = max(a[0] * a[1] * a[2], a[n-1] * a[n-2] * a[n-3], a[0] * a[1], a[n-1] * a[n-2], a[n-1] * a[0] * a[1])
    print(ans)