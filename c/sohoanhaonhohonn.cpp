#include <stdio.h>
#include <math.h>

int pernum(int n){
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n / i) sum += n/i;
		}
	}
	if(sum == n) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i < n; i+=2){// so hoan hao phai la so chan
		if(pernum(i)){
			printf("%d ", i);
		}
	}
	return 0;
}
