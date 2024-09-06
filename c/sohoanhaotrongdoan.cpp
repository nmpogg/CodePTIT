#include <stdio.h>
#include <math.h>

int PerNum(int n){
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			sum += i;
			if(i != n / i) sum += n / i;
		}
	}
	if(sum == n) return 1;
	else return 0;
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
		if(i == 1) continue;
		if(PerNum(i)) printf("%d ", i);
	}
}
