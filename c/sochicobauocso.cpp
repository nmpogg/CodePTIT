#include <stdio.h>
#include <math.h>

int main(){
	unsigned long t, l, r, n, i, dem1, dem2;
	scanf("%lu", &t);
	
	while(t--){
		dem1 = 0;
		scanf("%lu %lu", &l, &r);
		for(i = l; i <= r; i++){
			dem2 = 0;
			long long sqrt_i = (long long)sqrt(i);
			for(n = 1; n <= sqrt_i; n++){
				if(i % n == 0){
					dem2 += 2;
					if(n * n == i) dem2--;
				}
			}
			if(dem2 == 3) dem1++;
			
		}
		printf("%d\n", dem1);
	}
	return 0;
}
