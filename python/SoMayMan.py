n = int(input())
cnt = 0
while(n > 0):
    if(n % 10 == 4 or n % 10 == 7):
        cnt = cnt + 1
    n //= 10 
if(cnt == 4 or cnt == 7):
    print("YES")
else: print("NO")
    