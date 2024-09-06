#include <stdio.h>

int chia(long long n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
} 

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int cnt = 0;
		for(long long i = 3; i <= n; i+= 3){
			if(n % i == 0 && chia(i) % 3 == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
	return 0;
}
