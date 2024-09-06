#include <stdio.h>

int fibonacci(long long n){
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	if(n == fibo[0] || n == fibo[1]) return 1;
	for(int i = 2; i < 93; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
		if(n == fibo[i]) return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(fibonacci(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
