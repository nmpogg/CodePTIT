if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        freq = [0] * 1000001
        for i in a:
            freq[i] += 1
        for i in range(1000001):
            if freq[i] % 2 == 1:
                print(i)
                break
                 