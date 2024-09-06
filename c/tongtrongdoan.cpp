#include <stdio.h>

int main(){
	unsigned long a, b, i, TG, tong = 0;
	scanf("%lu %lu", &a, &b);
	if(b < a){
		TG = a;
		a = b;
		b = TG;				
	}
	for(i = a; i <=b; i++){
		tong += i;
	}
	printf("%lu", tong);
	return 0;
}
