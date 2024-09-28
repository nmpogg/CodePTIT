def sum(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

if __name__ == "__main__":
    n = int(input())
    cnt = 0
    while(n > 9):
        cnt += 1
        n = sum(n)
    print(cnt)