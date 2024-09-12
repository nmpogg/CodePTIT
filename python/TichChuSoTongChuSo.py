def ans(s):
    sum = 0
    mul = 1
    for i in range(len(s)):
        if i % 2 == 1: sum += int(s[i])
        elif s[i] != '0':
            mul *= int(s[i])
    return mul, sum

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        mul, sum = ans(s)
        print(mul, sum)


3
12345678
20000
22334455667788
