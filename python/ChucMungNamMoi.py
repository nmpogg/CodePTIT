if __name__ == "__main__":
    t = int(input())
    ds = set()
    for _ in range(t):
        ds.add(input().lower())
    print(len(ds))