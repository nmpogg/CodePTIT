#include <stdio.h>
#include <math.h>

int prime_num(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int fibonaci(int n){
	int fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
		if(fibo[0] == n || fibo[1] == n || fibo[i] == n) return 1;
	}
	return 0;	 
}

int sum_number(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b){
		int temp = a;
		a = b;
		b = temp;
	}
	for(int i = a; i <= b; i++){
		if(prime_num(i) && fibonaci(sum_number(i))) printf("%d ", i);
	}
	return 0;
}
