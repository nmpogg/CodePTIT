import math

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        cnt = 0
        while n % 7 != 0 and cnt <= 1000:
            s = str(n)
            s1 = s[::-1]
            n += int(s1)
            cnt += 1
        if(cnt > 1000): print(-1)
        else: print(n)