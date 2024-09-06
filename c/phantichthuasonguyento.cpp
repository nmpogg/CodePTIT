#include <stdio.h>

int main(){
	unsigned long t, n, i;
	scanf("%lu", &t);
	while(t > 0){
		printf("\n");
		scanf("%lu", &n);
		i = 2;
		while(n > 1){
			if( n % i == 0){
				printf("%lu ", i);
				n /= i;
			}
			else i++;
		}
		t--;
	}
	return 0;
}
