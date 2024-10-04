if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, b = map(int, input().split())
        s = list()
        while n > 0:
            idx = n % b
            if idx < 10:
                s.append(n % b)
            else:
                s.append(chr(n % b - 9 + 64))
            n //= b
        s.reverse()
        for i in s:
            print(i, end = '')
        print()