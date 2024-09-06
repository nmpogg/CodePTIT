#include <stdio.h>

int gcd(long long a, long long b) {
    while(a != b){
    	if(a > b) a = a - b;
    	if(b > a) b = b - a;
	}
	return a;
}

int lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        long long res = n;
        for (int i = n + 1; i <= m; i++) {
            res = lcm(res, i);
        }
        printf("%lld\n", res);
    }
    return 0;
}

