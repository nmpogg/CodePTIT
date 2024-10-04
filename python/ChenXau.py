if __name__ == "__main__":
    s1 = input()
    s2 = input()
    p = int(input()) - 1
    ans = s1[:p] + s2 + s1[p:]
    print(ans)