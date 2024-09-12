
t = int(input())
for _ in range(t):
    s = input()
    n = input()
    ans = 0
    idx = -1
    for i in range(len(s)-len(n)+1):
        if i < idx: continue
        flag = True
        for j in range(len(n)):
            if s[i + j] != n[j]:
                flag = False
                break
        if not flag: continue
        ans += 1
        idx = i + len(n) # tăng chỉ số lên len(n) đơn vị để tránh đếm 1 kí tự 2 lần 
    print(ans)

2
1212121112211221121
121
2222222222322292
2222
