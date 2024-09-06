#include <stdio.h>
#include <math.h>

int prime(int n){
	int sum = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				sum += i;
				n /= i;
			}
		}
	}
	if(n > 1) sum += n;
	return sum;
}

int main(){
	int t;
	scanf("%d", &t);
	long long sum_all = 0;
	while(t--){
		long long n;
		scanf("%lld", &n);
		sum_all += prime(n);
	}
	printf("%lld", sum_all);
	return 0;
}
