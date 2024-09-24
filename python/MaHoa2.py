p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    inp = input()
    if inp == '0': break
    k, s = map(str, inp.split())
    k = int(k)
    ans = ''
    for i in range(len(s)):
        idx = p.index(s[i])
        ans += p[(idx + k) % 28]
    ans = ans[::-1]
    print(ans)
