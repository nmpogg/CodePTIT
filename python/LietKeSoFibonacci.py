t = int(input())
lst = []
lst.append(0)
lst.append(1)
for i in range(2, 93):
    lst.append(lst[i-1] + lst[i-2])
for _ in range(t):
    inp = input()
    a, b = map(int, inp.split())
    for i in range(a, b+1):
        print(lst[i], end = ' ')
    print()