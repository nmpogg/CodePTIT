if __name__ == "__main__":
    n = int(input())
    while n > 9:
        res = str(n)
        l = res[:len(res)//2]
        r = res[len(res)//2:]
        n = int(l) + int(r)
        print(n)