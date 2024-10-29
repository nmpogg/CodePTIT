MOD = 10**9 + 7

def power_mod(x, y, mod):
    result = 1
    while y > 0:
        if y % 2 == 1:
            result = (result * x) % mod
        x = (x * x) % mod
        y //= 2
    return result

def sum_of_powers(n, k, mod):
    if n == 1:
        return 1
    if k == 0:
        return n % mod
    result = 0
    for i in range(1, min(n, 10**6) + 1):
        result = (result + power_mod(i, k, mod)) % mod
    return result

T = int(input().strip())
for _ in range(T):
    n, k = map(int, input().strip().split())
    print(sum_of_powers(n, k, MOD))
