#include <stdio.h>
#include <math.h>

int main(){
	unsigned long t, n, i, sum;
	scanf("%lu", &t);
	while(t > 0){
		scanf("%lu", &n);
		sum = 0;
		if( n % 2 == 1) printf("%lu\n", sum);
		else{
		
		for(i = 1; i <= (int)sqrt(n) ; i++){
			if(n % i == 0){
				if( i % 2 == 0) sum++;
				if(n / i % 2 == 0) sum ++;
				if( i * i == n) sum --;
			}
		}
		printf("%lu\n", sum);
		
		}
		t--;
	}
	return 0;
}
