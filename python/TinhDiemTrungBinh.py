n = int(input())
a = list(map(float, input().split()))
min = min(a)
max = max(a)
cnt = 0
res = 0
for i in a:
    if i != min and i != max:
        res += i
        cnt += 1
print("%.2f" % (res/cnt))