def check(s):
    sum = 0
    for i in range(len(s)):
        sum += ord(s[i]) - 48
    if sum % 3 == 0: return True
    return False

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s):
            print("YES")
        else:
            print("NO")