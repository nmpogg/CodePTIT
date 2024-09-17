from math import *

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        b = int(input())
        x = input()
        res = 0
        x = x[::-1]
        for i in range(len(x)):
            res = res + int(x[i]) * int(pow(2, i))
        a = []
        while res != 0:
            a.append(res % b)
            res //= b
        a = a[::-1]
        for i in range(len(a)):
            print(a[i], end = '')
        print()
        


