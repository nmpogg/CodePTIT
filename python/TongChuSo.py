def sum(s):
    sum = 0
    for c in s:
        sum += ord(c) - 48
    return str(sum)

if __name__ == "__main__":
    n = input()
    cnt = 0
    while(len(n) > 1):
        cnt += 1
        n = sum(n)
    print(cnt)