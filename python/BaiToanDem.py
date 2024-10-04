if __name__ == "__main__":
    n = int(input())
    a = list()
    while len(a) < n:
        b = list(map(int, input().split()))
        a += b
    cnt = [0] * (max(a)+1)
    for i in a:
        cnt[i] = 1
    flag = True
    for i in range(1, max(a)):
        if cnt[i] == 0:
            flag = False
            print(i)
    if flag:
        print('Excellent!')