import math

s = input()
n, k = map(int, s.split())
cnt = 0
for i in range(int(math.pow(10, k-1)), int(math.pow(10, k))):
    if(math.gcd(n, i) == 1):
        cnt += 1
        print(i, end = " ")
        if(cnt == 10):
            print()
            cnt = 0