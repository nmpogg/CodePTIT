if __name__ == "__main__":
    s = input()
    ds = set()
    ans = list()
    n = len(s) // 2 * 2
    idx = 0
    while idx <= n - 2:
        if s[idx:idx+2] not in ds:
            ds.add(s[idx : idx+2])
            ans.append(s[idx : idx+2])
        idx += 2

    for i in ans:
        print(i, end = ' ')
