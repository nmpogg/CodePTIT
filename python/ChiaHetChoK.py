s = input()
a, k, n = map(int, s.split())
if a + k >= n:
    print("-1")
else:
    b = k - a % k
    while(a + b <= n):
        print(b, end = ' ')
        b += k