#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long n;
		scanf("%ld", &n);
		long tich = 1;
		for(int i = 2; i <= n; i++){	
		
			while(n % i == 0){
				if((n / i) % i != 0) tich *=i;					
					n /=  i;
				}									
		}
	printf("%ld\n", tich);
	}
}
