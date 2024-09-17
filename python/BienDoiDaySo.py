def isValid(a):
    for i in range(3):
        if a[i] != a[i+1]: 
            return False
    return True
def trans(a):
    res = a[0]
    for i in range(3):
        a[i] = abs(a[i] - a[i+1])
    a[3] = abs(a[3] - res)

if __name__ == "__main__":
    while True:
        a = list(map(int, input().split()))
        if a == [0, 0, 0, 0]:
            break
        ans = 0
        while not isValid(a):
            trans(a)
            ans += 1
        print(ans)