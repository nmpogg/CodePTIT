#include <stdio.h>

int Strong(long long n){
	long long n1 = n, str = 0, du;
	while(n > 0){
		long long sum = 1;
		du = n % 10;
		for(int i = 1; i <= du; i++){
			sum *= i;
		}
		n /= 10;
		str += sum;
	}
	if(str == n1) return 1;
	else return 0;
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a > b){
		long long temp = a;
		a = b;
		b = temp;
	}
	for(int i = a; i <= b; i++){
		if(Strong(i)) printf("%lld ", i);
	}
}
