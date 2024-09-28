from functools import cmp_to_key



if __name__ == "__main__":
    n = int(input())
    dict = {}
    for _ in range(n):
        dict[input()] = map(int, input().split())
    a = list(dict)
