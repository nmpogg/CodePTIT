import heapq

def calculate_top_3_volumes(a, b):
    # Sử dụng heapq để tìm 3 thể tích lớn nhất mà không cần sắp xếp toàn bộ danh sách
    max_heap = []
    
    for h in range(1, min(a // 2, b // 2) + 1):
        V = (a - 2 * h) * (b - 2 * h) * h
        if len(max_heap) < 3:
            heapq.heappush(max_heap, V)
        else:
            heapq.heappushpop(max_heap, V)
    
    # Sắp xếp lại 3 giá trị lớn nhất theo thứ tự giảm dần
    return sorted(max_heap, reverse=True)

def extended_gcd(a, b):
    if b == 0:
        return a, 1, 0
    gcd, x1, y1 = extended_gcd(b, a % b)
    x = y1
    y = x1 - (a // b) * y1
    return gcd, x, y

def crt(V1, V2, V3, x, y, z):
    # Sử dụng Định lý phần dư Trung Hoa để giải hệ đồng dư
    M1 = V1
    M2 = V2
    M3 = V3
    
    # Bước 1: Giải hệ đồng dư 2 phương trình đầu tiên
    gcd, m1_inv, m2_inv = extended_gcd(M1, M2)
    
    if (y - x) % gcd != 0:
        return -1  # Không có nghiệm
    
    # Tổng quát hóa hệ đồng dư 2 phương trình
    mod = M1 * M2 // gcd
    solution = (x + (y - x) // gcd * m1_inv * M1) % mod
    
    # Bước 2: Giải tiếp với phương trình thứ ba
    gcd, mod_inv, m3_inv = extended_gcd(mod, M3)
    
    if (z - solution) % gcd != 0:
        return -1  # Không có nghiệm
    
    # Tổng quát hóa nghiệm cuối cùng
    final_mod = mod * M3 // gcd
    solution = (solution + (z - solution) // gcd * mod_inv * mod) % final_mod
    
    return solution

def find_books(a, b, x, y, z, l, r):
    volumes = calculate_top_3_volumes(a, b)
    
    if len(volumes) < 3:
        return -1  # Không đủ 3 thể tích
    
    V1, V2, V3 = volumes  # Lấy 3 thể tích lớn nhất
    
    # Giải hệ đồng dư
    n = crt(V1, V2, V3, x, y, z)
    
    # Nếu n nằm trong khoảng [l, r], trả về n
    if n != -1 and l <= n <= r:
        return n
    
    # Nếu n không thuộc khoảng [l, r], ta cần tìm nghiệm tiếp theo
    # Tăng n cho đến khi nó lớn hơn hoặc bằng l
    if n < l:
        step = V1 * V2 * V3 // extended_gcd(V1 * V2, V3)[0]  # Bước nhảy
        n += ((l - n + step - 1) // step) * step
    
    # Kiểm tra xem n có nằm trong [l, r] hay không
    if l <= n <= r:
        return n
    
    return -1  # Không có nghiệm trong khoảng [l, r]

# Input processing
t = int(input())
results = []
for _ in range(t):
    a, b, x, y, z, l, r = map(int, input().split())
    result = find_books(a, b, x, y, z, l, r)
    results.append(result)

# Output results
for res in results:
    print(res)
