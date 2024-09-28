if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        a, b, x, y, z, l, r = map(int, input().split())
        V = []
        for h in range(1, min(a // 2, b // 2)):
            V.append((a - 2 * h) * (b - 2 * h) * h)
        V.sort()
        V1 = V[len(V) - 1]
        V2 = V[len(V) - 2]
        V3 = V[len(V) - 3]
        ans = 0
        for i in range(l, r+1):
            if i % V1 == x and i % V2 == y and i % V3 == z:
                ans = i
                break
        print(ans)
