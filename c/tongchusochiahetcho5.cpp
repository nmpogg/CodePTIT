#include <stdio.h>
#include <math.h>

int check_snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}
	}
	return 1;
}

int sumNum(int n){
	int sum = 0, digit;
	while(n > 0){
		digit = n % 10;
		sum += digit;
		n /= 10;
	}
	if(sum % 5 == 0) return 1;
	else return 0;
}

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for(int i = 2; i < n; i++){
		if(check_snt(i) && sumNum(i)){
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
	return 0;
}
