if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        M, N = map(int, input().split())
        H = [list(map(int, input().split())) for _ in range(M)]
        
        surface_area = 2 * (M * N)  # Mặt trên và mặt dưới

        for i in range(M):
            for j in range(N):
                h = H[i][j]
                # trên
                if i > 0:
                    surface_area += max(h - H[i - 1][j], 0)
                else:
                    surface_area += h  # không có ô phía trên
                
                # dưới
                if i < M - 1:
                    surface_area += max(h - H[i + 1][j], 0)
                else:
                    surface_area += h  # không có ô phía dưới
                
                # trái
                if j > 0:
                    surface_area += max(h - H[i][j - 1], 0)
                else:
                    surface_area += h  # không có ô phía trái
                
                # phải
                if j < N - 1:
                    surface_area += max(h - H[i][j + 1], 0)
                else:
                    surface_area += h  # không có ô phía phải

        print(surface_area)
