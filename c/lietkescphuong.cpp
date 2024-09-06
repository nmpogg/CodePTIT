#include <stdio.h>
#include <math.h>

int main(){
	unsigned long m, n, i, dau, cuoi, d = 0;
	scanf("%lu %lu", &m, &n);
	dau = sqrt(m);
	cuoi = sqrt(n);
	if(dau * dau == m){
		d = dau;
	}
	else d++;
	printf("%lu\n", cuoi - d + 1);
	
	for(i = dau; i <= cuoi; i++){
		printf("%lu\n", i * i);
	}
	return 0;
}
