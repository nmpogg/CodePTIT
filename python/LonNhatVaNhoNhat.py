if __name__ == "__main__":
    while True:
        n = int(input())
        if n == 0: break
        ds = set()
        for _ in range(n):
            x = int(input())
            ds.add(x)
        if len(ds) == 1:
            print('BANG NHAU')
        else:
            print(min(ds), max(ds))

