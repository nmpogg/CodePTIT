#include <stdio.h>
#include <math.h>

int main(){
	unsigned long t, i, j, a, b, ucln;
	scanf("%lu", &t);
	
	for(i = 1; i <= t; i++){
		scanf("%lu %lu", &a, &b);
		ucln = 1;
		for(j = 1; j <= abs(a-b); j++){
			if(a % j == 0 && b % j == 0)
			ucln = j;
		}
		printf("%lu\n", j);
	}
	return 0;
}
