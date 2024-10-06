X = []
vst = []

def Try(i, n):
    for j in range(1, n+1):
        if not vst[j]:
            X[i] = j
            vst[j] = True
            if i == n:
                for idx in range(1, n+1):
                    print(s[X[idx]- 1], end = '')
                print()
            else:
                Try(i+1, n)
            vst[j] = False

if __name__ == "__main__":
    s = input()
    X = [0] * (len(s)+1)
    vst = [False] * (len(s)+1)
    Try(1, len(s))