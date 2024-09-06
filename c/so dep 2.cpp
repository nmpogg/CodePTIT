#include <stdio.h>
#include <math.h>

int prime(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;		
	}
	return 1;
}

int sum(int n){
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
	for(long long i = pow(10, n-1); i < pow(10, n); i++){
		if(prime(i) && prime(sum(i))) printf("%lld ", i);
	}
}
