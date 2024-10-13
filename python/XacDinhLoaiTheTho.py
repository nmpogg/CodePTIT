if __name__ == "__main__":
    n = int(input())
    ans = list()
    i = 0
    while i < n:
        s = input()
        i += 1
        a = list(s.split())
        if len(a) == 7 and i != 1:
            ans.append(2)
            i += 3
            input()
            input()
            input()
        elif len(a) == 6:
            while True:
                tmp = input()
                


    print(len(ans))
    for x in ans:
        print(x)
