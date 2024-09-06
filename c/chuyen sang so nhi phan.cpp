#include <stdio.h>

int main(){
	int n, i = 0;
	int a[100];
	scanf("%d", &n);
	if(n == 0) printf("0");
	while(n){
		a[i] = n % 2;
		n /= 2;
		i++;
	}
	for(int j = i - 1; j >= 0; j--){
		printf("%d", a[j]);
	}
	return 0;
}
