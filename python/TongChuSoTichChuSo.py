def ans(s):
    sum = 0
    mul = 1
    flag = True
    for i in range(len(s)):
        if i % 2 == 0: sum += int(s[i])
        elif s[i] != '0':
            flag = False
            mul *= int(s[i])
    if flag: mul = 0
    return sum, mul

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        sum, mul = ans(s)
        print(sum, mul)