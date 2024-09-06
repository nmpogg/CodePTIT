#include <stdio.h>

int main(){
	unsigned long n, tich = 1;
	scanf("%lu", &n);
	while(n > 0){
		tich *= n % 10;
		n /= 10;
	}
	printf("%lu", tich);
	return 0;
}
