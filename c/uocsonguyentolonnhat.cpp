#include <stdio.h>
#include <math.h>

int check_snt(long long n){
    if(n < 2) return 0;
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long max = 1;
        for(long long i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                }
                if(check_snt(i) && i > max) max = i;
            }
        }
        if(n > 1 && check_snt(n) && n > max) max = n;
        printf("%lld\n", max);
    }
    return 0;
}

