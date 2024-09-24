t = int(input())
for _ in range(t):
    s = input()
    cnt = 1
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            cnt += 1
        else:
            print("%d%s" % (cnt, s[i]), end = "")
            cnt = 1
    print(cnt, s[len(s)-1], sep = '')
