def count_partitions(A, target, current_sum, index, count):
    if count == 2:  
        return 1 if current_sum == target else 0
    if current_sum > target:
        return 0
    
    total_count = 0
    for i in range(index, len(A)):
        if A[i] == 0:  # Đã sử dụng
            continue
        
        # Đánh dấu A[i] là đã sử dụng
        original = A[i]
        A[i] = 0  # Đánh dấu là đã sử dụng
        
        total_count += count_partitions(A, target, current_sum + original, i + 1, count + (current_sum == target))
        
        A[i] = original
    
    return total_count

def count_ways_to_partition(N, A):
    total_sum = sum(A)
 
    if total_sum % 3 != 0:
        return 0
    
    target = total_sum // 3
    A.sort(reverse=True)
    
    return count_partitions(A, target, 0, 0, 0)

T = int(input())

for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    result = count_ways_to_partition(N, A)
    print(result)

