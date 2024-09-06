#include <stdio.h>

int main(){
	unsigned int t;
	long long tong, n;
	scanf("%u", &t);
	
	while(t > 0){
		tong = 0;
		scanf("%lld", &n);
		
		while(n > 0){
			tong += n % 10;
			n /= 10;
		}
		printf("%lld\n", tong);
		t--;
	}
	return 0;
}
