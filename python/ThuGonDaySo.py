if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().split()))
    i = 1
    
    while i < len(a):
        if (a[i] + a[i-1]) % 2 == 0:
            a[i-1:i+1] = []
            i = max(i - 1, 1) 
        else:
            i += 1
    
    print(len(a))
