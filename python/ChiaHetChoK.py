s = input()
a, k, n = map(int, s.split())
if a >= n:
    print("-1")
else:
    for b in range(1, n-a+1):
        if (a + b) % k == 0: print(b, end = " ")