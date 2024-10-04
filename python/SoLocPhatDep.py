if __name__ == "__main__":
    s = input()
    n = len(s)
    i = 0
    flag = True
    while i < n:
        if s[i:i+3] == '688':
            i += 3
        elif s[i:i+2] == '68':
            i += 2
        elif s[i:i+1] == '6':
            i += 1
        else:
            flag = False
            break
    if flag: print('YES')
    else: print('NO')
