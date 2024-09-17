a = list(map(int, input().split()))
ans = [x for x in a if x % 42 != 0]
print(len(ans))