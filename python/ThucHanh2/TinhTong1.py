MOD = 10**9 + 7

def power_mod(x, y, mod):
    result = 1
    x = x % mod
    while y > 0:
        if (y & 1) == 1:
            result = (result * x) % mod
        y = y >> 1
        x = (x * x) % mod
    return result

def calculate_sum(n, k):
    sum_value = 0
    for i in range(1, n + 1):
        sum_value = (sum_value + power_mod(i, k, MOD)) % MOD
    return sum_value

T = int(input().strip())
for _ in range(T):
    n, k = map(int, input().strip().split())
    print(calculate_sum(n, k))

