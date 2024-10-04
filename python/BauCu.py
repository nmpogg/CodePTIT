if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    ds = set(a)
    if len(ds) < 2:
        print('NONE')
    else:
        freq = [0] * 11
        for i in a:
            freq[i] += 1
        maxx = max(freq)
        for i in range(1, 11):
            if freq[i] == maxx:
                freq[i] = 0
        ans = 0
        val = -1
        for i in range(11):
            if freq[i] > val:
                val = freq[i]
                ans = i
        if ans == 0: print('NONE')
        else: print(ans)
