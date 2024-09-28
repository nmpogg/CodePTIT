
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        cnt = 0
        for i in range(len(a) - 1):
            x, y = a[i], a[i + 1]
            if x > y:
                x, y = y, x
            while y > 2 * x:
                x *= 2
                cnt += 1
        print(cnt)
