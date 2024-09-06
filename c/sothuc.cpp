#include <stdio.h>

int main(){
	int n, bit;
	int a[100];
	scanf("%d", &n);
	int k = 0;
	while(n != 0){
		bit = n % 2;		
		a[k] = bit;
		++k;
		n /= 2;
	}
	for(int i = k - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
	return 0;
}
