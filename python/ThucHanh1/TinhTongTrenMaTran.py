MOD = 10**9 + 7

N, M, K = map(int, input().split())

row_mul = [1] * N
col_mul = [1] * M

for _ in range(K):
    query = input().split()
    if query[0] == "R":
        X = int(query[1]) - 1  # Chuyển từ 1-based index sang 0-based
        Y = int(query[2])
        row_mul[X] = (row_mul[X] * Y) % MOD
    elif query[0] == "S":
        X = int(query[1]) - 1  # Chuyển từ 1-based index sang 0-based
        Y = int(query[2])
        col_mul[X] = (col_mul[X] * Y) % MOD

total_sum = 0

# Tính tổng của ma trận
for i in range(N):
    for j in range(M):
        # Phần tử tại vị trí (i, j) ban đầu là (i * M + (j + 1))
        element = (i * M + (j + 1)) % MOD
        # Nhân với hệ số của hàng i và cột j
        element = (element * row_mul[i]) % MOD
        element = (element * col_mul[j]) % MOD

        total_sum = (total_sum + element) % MOD

print(total_sum)