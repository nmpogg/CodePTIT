from functools import cmp_to_key

def sum(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum

def cmp(a, b):
    if sum(a) != sum(b):
        return sum(a) - sum(b)
    else:
        return a - b

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort(key = cmp_to_key(cmp))
        for x in a:
            print(x, end = ' ')
        print()

