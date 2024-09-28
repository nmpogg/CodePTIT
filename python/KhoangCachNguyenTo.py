import math

p = [1] * 10001
p[0] = p[1] = 0
for i in range(2, 101):
    if p[i] == 1:
        for j in range(i*i, 10001, i):
            p[j] = 0
nto = list()
for i in range(2,10001):
    if p[i] == 1:
        nto.append(i)

if __name__ == "__main__":
    n, x = map(int, input().split())
    cnt = 0
    while cnt <= n:
        print(x, end = ' ')
        x += nto[cnt]
        cnt += 1