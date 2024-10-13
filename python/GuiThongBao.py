n = int(input())
s = [input().strip() for _ in range(n)]

for i in s:
    if len(i) <= 100:
        print(i)
    else:
        k = 98
        while k > 0 and i[k].isalpha():    
            k -= 1
        print(i[:k+1])
