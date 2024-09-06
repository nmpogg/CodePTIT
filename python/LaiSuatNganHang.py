t = int(input())

for i in range(t): 
    s = input()
    n, x, m = map(float, s.split())
    cnt = 0
    while(n < m):
        cnt += 1
        n += n * x / 100
    print(cnt)