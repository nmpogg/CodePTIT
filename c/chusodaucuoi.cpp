#include <stdio.h>

int main(){
	unsigned long n, sodau, socuoi;
	scanf("%lu", &n);
	socuoi = n % 10;
	while(n > 0){
		sodau = n % 10;
		n /= 10;
	}
	printf("%lu %lu", sodau, socuoi);
	
	return 0;
}
