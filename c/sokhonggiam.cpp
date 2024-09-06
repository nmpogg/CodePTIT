#include <stdio.h>

int main(){
	unsigned long long n, m, k, t;
	scanf("%llu", &t);
	while(t > 0){	
		scanf("%llu", &n);
		while(n > 0){
			m = n % 10;
			k = n / 10 % 10;
			if(k > m){
				printf("NO\n");
				break;
			}
			n /= 10;	
		}
	if(k < m) printf("YES\n");
	t--;
	}
	return 0;
	
		
}
