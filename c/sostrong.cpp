#include <stdio.h>

int main(){
	unsigned long n, i, tong, du, tich, n2;
	scanf("%lu", &n);
	n2 = n;
	tong = 0;
	while(n > 0){
		tich = 1;
		du = n % 10;
		for(i = 1; i <= du; i++){
			tich *= i;
		}
		tong += tich;
		n /= 10;		
	}
	if(tong == n2) printf("1");
	else printf("0");
	
	return 0;				
}

