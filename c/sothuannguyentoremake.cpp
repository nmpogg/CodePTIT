#include <stdio.h>
#include <math.h>

int is_prime(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int is_prime_digit_sum(int n){
    int sum = 0;
    while(n != 0){
        int a = n % 10;
        n /= 10;
        if(!is_prime(a)){
            return 0;
            break;
        }
        sum += a;
    }
    return is_prime(sum);
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m, n;     
        int count = 0;
        scanf("%d %d", &m, &n);
        for(int i = m; i <= n; i++){
            if(is_prime(i) && is_prime_digit_sum(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

