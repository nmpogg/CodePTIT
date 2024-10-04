if __name__ == "__main__":
    s = input()
    k = int(input())
    ans = list()
    n = len(s) // 2 * 2
    idx = 0
    cnt = [0] * 101
    while idx <= n - 2:
        res = int(s[idx:idx+2])
        if res not in ans: ans.append(res)
        cnt[res] += 1
        idx += 2
    ans.sort()
    flag = False
    for i in ans:
        if cnt[i] >= k:
            flag = True
            print(i, cnt[i])
    if not flag: print('NOT FOUND')