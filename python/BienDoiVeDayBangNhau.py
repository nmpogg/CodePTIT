import math

if __name__ == "__main__":
    n = int(input())
    ds = list(map(int, input().split()))
    step = 1e9
    val = 0
    for item in ds:
        res = 0
        for idx in ds:
            res += abs(item - idx)
        if res < step:
            step = res
            val = item
    print(step, val)