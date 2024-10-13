if __name__ == "__main__":
    n = int(input())
    a = list()
    int
    while len(a) < n:
        b = list(map(int, input().split()))
        a += b
    le = list()
    chan = list()
    for x in a:
        if x % 2 == 0:
            chan.append(x)
        else: le.append(x)
    le.sort()
    chan.sort(reverse=True)
    for x in a:
        if x % 2 == 0:
            print(chan.pop(), end = ' ')
        else:
            print(le.pop(), end = ' ')
