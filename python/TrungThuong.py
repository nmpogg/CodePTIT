if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        cnt = [0] * 1001
        for _ in range(n):
            cnt[int(input())] += 1
        res = ans = -1
        for i in range(1001):
            if cnt[i] > res:
                ans = i
                res = cnt[i]
        print(ans)
3
3
999
999
19
4
13
333
333
13
3
11
12
13  