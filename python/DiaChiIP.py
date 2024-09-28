import math
def check(s):
    a = s.split('.')
    if(len(a)) < 4: return False
    for x in a:
        if not x.isdigit() or int(x) < 0 or int(x) > 255:
            return False
    return True

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        s = input()
        if check(s):
            print("YES")
        else:
            print("NO")
        
        