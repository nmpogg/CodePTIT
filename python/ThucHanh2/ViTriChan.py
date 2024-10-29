MOD = 10**9 + 7

def is_special_number(x, d):
    s = str(x)
    for i in range(len(s) - 1, -1, -2):
        if s[i] == str(d):
            return True
    return False

def count_special_numbers(m, d, a, b):
    count = 0
    for x in range((a + m - 1) // m * m, b + 1, m):
        if is_special_number(x, d):
            count = (count + 1) % MOD
    return count

m, d = map(int, input().split())
a, b = map(int, input().split())

result = count_special_numbers(m, d, a, b)
print(result)
