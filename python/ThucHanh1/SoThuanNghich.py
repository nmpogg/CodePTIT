def isValid(n, k):
    a = []
    while(n != 0):
        a.append(n % k)
        n //= k
    return a == a[::-1]

if __name__ == "__main__":
    a, b, m = map(int, input().split())
    ans = 0
    for i in range(a, b+1):
        flag = True
        for k in range(2, m+1):
            if not isValid(i, k):
                flag = False
        if flag:
            ans += 1
    print(ans)


