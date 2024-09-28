def triangle_area(x1, y1, x2, y2, x3, y3):
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0)

def is_point_in_triangle(px, py, x1, y1, x2, y2, x3, y3):
    area_abc = triangle_area(x1, y1, x2, y2, x3, y3)
    area_pab = triangle_area(px, py, x1, y1, x2, y2)
    area_pbc = triangle_area(px, py, x2, y2, x3, y3)
    area_pca = triangle_area(px, py, x3, y3, x1, y1)
    return area_abc == area_pab + area_pbc + area_pca

if __name__ == "__main__":
    N = int(input())
    covered_points = set()

    for _ in range(N):
        x1, y1, x2, y2, x3, y3 = map(int, input().split())
        min_x = min(x1, x2, x3)
        max_x = max(x1, x2, x3)
        min_y = min(y1, y2, y3)
        max_y = max(y1, y2, y3)

        for x in range(min_x, max_x + 1):
            for y in range(min_y, max_y + 1):
                if is_point_in_triangle(x, y, x1, y1, x2, y2, x3, y3):
                    covered_points.add((x, y))

    total_area = len(covered_points)
    print(f"{total_area:.6f}")
