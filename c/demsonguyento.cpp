#include <stdio.h>
#include <math.h>

int check_prime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}
	}
	return 1;
}
int check_digits(int n){
	int digit;
	while(n > 0){
		digit = n % 10;
		if(!check_prime(digit)) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		int cnt = 0;
		scanf("%d %d", &a, &b);
		for(int i = a; i <= b; i++){
			if(check_prime(i) && check_digits(i)) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
