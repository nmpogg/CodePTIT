#include <stdio.h>

int main(){
	unsigned long n, dem = 0;
	scanf("%lu", &n);
	
	while(n > 0){
		n /= 10;
		dem ++;
	}
	printf("%lu", dem);
	return 0;
}
