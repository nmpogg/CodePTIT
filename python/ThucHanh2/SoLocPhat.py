def count_lucky_digits(N):
    count = N // 8
    total_count = 0
    
    for k in range(1, count + 1):
        number = 8 * k
        while number > 0:
            digit = number % 10
            if digit == 6 or digit == 8:
                total_count += 1
            number //= 10
            
    return total_count

T = int(input())

for _ in range(T):
    N = int(input())
    result = count_lucky_digits(N)
    print(result)
