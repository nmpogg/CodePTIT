#include <stdio.h>

int main(){
	unsigned int t;
	unsigned long long n, batdau, ketthuc;
	scanf("%u", &t);
	
	while(t > 0){
		batdau = 0;
		scanf("%llu", &n);
		ketthuc = n % 10;
		while(n > 0){
			batdau = n % 10;
			n /= 10;			
		}
		if(batdau == ketthuc) printf("YES\n");
		else printf("NO\n");
		t--;		
	}
	
	return 0;
}
