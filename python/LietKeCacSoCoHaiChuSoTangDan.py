if __name__ == "__main__":
    s = input()
    ds = set()
    n = len(s) // 2 * 2
    idx = 0
    while idx <= n - 2:
        ds.add(s[idx : idx+2])
        idx += 2
    ds = list(ds)
    ds.sort()
    for i in ds:
        print(i, end = ' ')
