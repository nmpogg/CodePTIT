n = int(input())
for _ in range(n):
    a = list(input())
    a.sort()
    sum = 0
    for i in a:
        if i.isdigit():
            sum += int(i)
        else:
            print(i, end = '')
    print(sum)