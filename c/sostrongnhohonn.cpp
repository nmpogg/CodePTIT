#include <stdio.h>

int strong(long long n){
	long long str = 0, n1 = n;
	long long du;
	while(n > 0){
		long long sum = 1;
		du = n % 10;
		for(int i = 1; i <= du; i++){
			sum *= i;
		}
		str += sum;
		n /= 10;
	}
	if(str == n1) return 1;
	else return 0;
}

int main(){
	long long n;
	scanf("%lld", &n);
	for(int i = 1; i < n; i++){
		if(strong(i)) printf("%lld ", i);
	}
}
