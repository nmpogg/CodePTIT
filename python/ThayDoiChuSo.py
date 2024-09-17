def findMin(a, b, p, q):
    if p > q: p, q = q, p
    res = 0
    for i in range(len(a)):
        if int(a[i]) == q: res = res * 10 + p
        else: res = res * 10 + int(a[i])
    tmp = 0
    for i in range(len(b)):
        if(int(b[i]) == q): tmp = tmp * 10 + p
        else: tmp = tmp * 10 + int(b[i])
    return res + tmp

def findMax(a, b, p, q):
    if p > q: p, q = q, p
    res = 0
    for i in range(len(a)):
        if int(a[i]) == p: res = res * 10 + q
        else: res = res * 10 + int(a[i])
    tmp = 0
    for i in range(len(b)):
        if(int(b[i]) == p): tmp = tmp * 10 + q
        else: tmp = tmp * 10 + int(b[i])
    return res + tmp

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        p, q = map(int, input().split())
        a = input()
        b = input()
        print(findMin(a, b, p, q), findMax(a, b, p, q))
