#include <stdio.h>
#include <math.h>

int sum_of_num(int n){
	int digit, sum = 0;
	while(n > 0){
		digit = n % 10;
		if(digit == 4) return 0;
		sum += digit;
		n /= 10;
	}
	if(sum % 10 == 0) return 1;
	else return 0;
}

int checktn(int n){
	int digit, stn = 0, n1 = n;
	while(n > 0){
		digit = n % 10;
		stn = stn * 10 + digit;
		n /= 10;
	}
	if(stn == n1) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = pow(10, n-1); i < (int)pow(10, n) - 1; i++ ){
			if(sum_of_num(i) && checktn(i)) printf("%d ", i);
		}
		printf("\n");
	}
}
