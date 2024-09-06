#include <stdio.h>
#include <math.h>

int prime_num(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int sum_num(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(prime_num(sum)) return 1;
	else return 0;
}

int num(int n){
	int digit;
	while(n > 0){
		digit = n % 10;
		if(digit != 2 && digit != 3 && digit != 5 && digit != 7) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;		
		int count = 0;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			if(prime_num(i) && sum_num(i) && num(i)) count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
