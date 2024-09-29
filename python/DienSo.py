if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        ds = set(map(int, input().split()))
        print(max(ds) - min(ds) + 1 - len(ds))
