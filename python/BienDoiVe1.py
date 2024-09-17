while True:
    n = int(input())
    if n == 0: break
    a = [0] * 10000
    a[n] = 1
    while n != 1:
        if n % 2 == 0:
            n = n // 2
            a[n] = 1
        else:
            n = n * 3 + 1
            a[n] = 1
    ans = 0
    for x in a:
        if x != 0: ans += 1
    print(ans)