#include <stdio.h>
#include <math.h>

int sum_of_factors(long long n){
    long long i, sum = 1;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            sum += i;
            if(i != n/i) sum += n/i;
        }
    }
    return sum;
}

int sum_of_digits(long long n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    long long n;
    scanf("%lld", &n);
    if(sum_of_digits(n) == sum_of_factors(n)) printf("YES");
    else printf("NO");
    return 0;
}

