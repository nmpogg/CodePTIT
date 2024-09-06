#include <stdio.h>

int main(){
	unsigned int n, i;
	scanf("%u", &n);
	i = 2;
	
	while(n > 1){
		if(n % i == 0){
			printf("%u", i);
			n /= i;
			if(n >= 2) printf("x");
			
		}
		else i++;
	}
	return 0;
}
