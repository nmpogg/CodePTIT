#include <stdio.h>

int main(){
	unsigned long t, n, i, tich;
	scanf("%lu", &t);
	while(t > 0){
		scanf("%lu", &n);
		i = 2;
		tich = 1;
		while(n > 1){
			if(n % i == 0){
				if(tich % i == 0) goto here;			
			}
			tich *= i;
			here:
			n /= i;
		}
		printf("%lu", tich);
		t--;
	}
	return 0;
	
}
