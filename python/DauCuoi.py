t = int(input())
for _ in range(t):
    s = input()
    a = list(s)
    if(a[0] + a[1] == a[len(a)-2] + a[len(a)-1]):
        print("YES")
    else: print("NO")