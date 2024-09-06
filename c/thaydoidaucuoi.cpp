#include <stdio.h>
#include <math.h>

int main(){
	unsigned long n, sodau, socuoi, x, i, dem = 0;
	scanf("%lu", &n);
	socuoi = n % 10;
	i = n;
	while(n > 0){
		sodau = n % 10;			dem ++;
		n /= 10;	
	}
	x = i - sodau * pow(10, dem - 1) - socuoi + socuoi * pow(10, dem - 1) + sodau;
		
	printf("%lu", x);
		
	return 0;
}
