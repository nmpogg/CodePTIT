if __name__ == "__main__":
    s = input()
    ans = list()
    n = len(s) // 2 * 2
    idx = 0
    cnt = [0] * 101
    while idx <= n - 2:
        res = int(s[idx:idx+2])
        if res not in ans: ans.append(res)
        cnt[res] += 1
        idx += 2

    for i in ans:
        print(i, cnt[i])
