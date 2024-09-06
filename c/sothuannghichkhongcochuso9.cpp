#include <stdio.h>

int check_stn(int n){
	int digit, stn = 0, n1 = n;
	while(n > 0){
		digit = n % 10;
		if(digit == 9) return 0;
		stn = stn * 10 + digit;
		n /= 10;
	}
	if(stn == n1) return 1;
	else return 0;
}

int main(){
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++){
		if(check_stn(i)){
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}
