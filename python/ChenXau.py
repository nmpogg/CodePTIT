s1 = list(input().split())
s2 = list(input().split())
idx = int(input()) - 1
s1[idx:idx] = s2
for i in range(len(s1)):
    if i == idx + len(s2)-1: print(s1[i], end = '')
    else:
        print(s1[i], end = ' ')