s = input()
res = ""
cnt = 0
for i in range(len(s)-1, 0, -1):
    res += s[i]
    cnt += 1
    if(cnt == 3):
        cnt = 0
        res += ','
res += s[0]
ans = res[::-1]
print(ans)