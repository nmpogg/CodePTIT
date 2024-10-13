if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        max_val = max(a)
        idx = -1
        for i in range(n):
            if a[i] == max_val:
                idx = i
                break
        a.insert(idx, m)
        for x in a:
            if x < 0: print(x, end = ' ')
        for x in a:
            if x >= 0: print(x, end = ' ')
        print()
