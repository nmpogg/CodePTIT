#include <stdio.h>

void fibonaci(int n){
	long long fibo[32];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 30; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
	for(int i = 0; i < n; i++){
		printf("%d ", fibo[i]);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibonaci(n);
	return 0;
}
