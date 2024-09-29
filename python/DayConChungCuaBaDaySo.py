if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m, k = map(int, input().split())
        a = list(map(int, input().split()))
        b = list(map(int, input().split()))
        c = list(map(int, input().split()))
        freq1 = dict()
        freq2 = dict()
        freq3 = dict()
        for i in a:
            if i in freq1:
                freq1[i] += 1
            else: freq1[i] = 1
        
        for i in b:
            if i in freq2:
                freq2[i] += 1
            else: freq2[i] = 1
        
        for i in c:
            if i in freq3:
                freq3[i] += 1
            else: freq3[i] = 1
        ans = list()
        for i in a:
            if freq1[i] > 0 and i in freq2 and freq2[i] > 0 and i in freq3 and freq3[i] > 0:
                ans.append(i)
                freq1[i] -= 1
                freq2[i] -= 1
                freq3[i] -= 1
        if not len(ans):
            print('NO')
        else: 
            for i in ans:
                print(i, end = ' ')
            print()
