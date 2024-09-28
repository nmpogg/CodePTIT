if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        a = list(input())
        b = list(input())
        a.sort()
        b.sort()
        print("Test %d:" % (i+1), end = ' ')
        if a == b:
            print("YES")
        else:
            print("NO")
        