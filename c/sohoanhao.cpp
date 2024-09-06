#include <stdio.h>
int main(){
	unsigned long n, i, tong;
	scanf("%lu", &n);
	tong = 0;
	for(i = 1; i < n; i++){
		if(n % i == 0){
			tong += i;
		}
	}
	if(n == tong){
		printf("1");		
	}
	else printf("0");
	return 0;
}
