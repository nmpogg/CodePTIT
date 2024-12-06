import math
from itertools import combinations

def is_inside_circle(center, radius, point):
    """Kiểm tra điểm có nằm trong đường tròn không"""
    x, y = point
    cx, cy = center
    distance = math.sqrt((x - cx)**2 + (y - cy)**2)
    return distance < radius

def circle_from_three_points(p1, p2, p3):
    """Tìm tâm và bán kính đường tròn ngoại tiếp qua 3 điểm"""
    x1, y1 = p1
    x2, y2 = p2
    x3, y3 = p3
    
    # Tính determinant
    A = x1 * (y2 - y3) - y1 * (x2 - x3) + (x2 * y3 - x3 * y2)
    if A == 0:
        return None  # 3 điểm thẳng hàng, không tạo thành đường tròn

    # Tọa độ tâm
    B1 = (x1**2 + y1**2) * (y3 - y2) + (x2**2 + y2**2) * (y1 - y3) + (x3**2 + y3**2) * (y2 - y1)
    B2 = (x1**2 + y1**2) * (x2 - x3) + (x2**2 + y2**2) * (x3 - x1) + (x3**2 + y3**2) * (x1 - x2)
    cx = -B1 / (2 * A)
    cy = -B2 / (2 * A)
    
    # Bán kính
    radius = math.sqrt((cx - x1)**2 + (cy - y1)**2)
    return (cx, cy), radius

def solve():
    T = int(input())
    results = []
    for _ in range(T):
        N = int(input())
        K = int(input())
        points = [tuple(map(int, input().split())) for _ in range(N)]
        
        found = False
        for p1, p2, p3 in combinations(points, 3):
            circle = circle_from_three_points(p1, p2, p3)
            if circle is None:
                continue
            
            center, radius = circle
            inside_count = sum(is_inside_circle(center, radius, p) for p in points if p not in [p1, p2, p3])
            
            if inside_count == K:
                found = True
                break
        
        print("YES" if found else "NO")

solve()

