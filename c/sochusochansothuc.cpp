#include <stdio.h>

int main(){
	double n;
	scanf("%lf", &n);
	int count = 0, k;
	while((int) n != n){
		n *= 10;
	}
	int nguyen = (int) n;
	
	while(nguyen > 0){
		k = nguyen % 10;
		if(k % 2 == 0) count++;
		nguyen /= 10;
	}
	printf("%d", count);
	return 0;
}
