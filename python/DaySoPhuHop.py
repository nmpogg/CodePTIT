if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        a.sort()
        b.sort()
        flag = True
        for i in range(n):
            if a[i] > b[i]:
                flag = False
                break
        if flag:
            print("YES")
        else:
            print("NO")
