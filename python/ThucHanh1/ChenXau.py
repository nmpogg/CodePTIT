if __name__ == "__main__":
    s1 = input()
    s2 = input()
    p = int(input())
    ans = s1[:p-1] + s2 + s1[p-1:]
    print(s1)
