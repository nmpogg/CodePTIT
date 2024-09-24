
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        cnt = [0] * 1000001
        for i in a:
            cnt[i] += 1
        ans = -1
        for i in range(1000001):
            if cnt[i] > n//2 and cnt[i] > ans:
                ans = i
        if ans == -1: print("NO")
        else: print(ans)