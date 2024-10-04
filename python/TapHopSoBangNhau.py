if __name__ == "__main__":
    n, m = map(int, input().split())
    a = set(map(int, input().split()))
    b = set(map(int, input().split()))
    a = sorted(list(a))
    b = sorted(list(b))
    if len(a) != len(b):
        print('NO')
    else:
        for i in range(len(a)):
            if a[i] != b[i]:
                print('NO')
                exit()
        print('YES')