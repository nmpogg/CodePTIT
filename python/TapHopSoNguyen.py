if __name__ == "__main__":
    n, m = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))
    for i in sorted(list(a.intersection(b))):
        print(i, end = ' ')
    print()
    for i in sorted(list(a.difference(b))):
        print(i, end = ' ')
    print()
    for i in sorted(list(b.difference(a))):
        print(i, end = ' ')