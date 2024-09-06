#include <stdio.h>

int main(){
	unsigned int n;
	scanf("%u", &n);
	if(n <= 0 || n >= 100){
		printf("Nhap sai");
	}
	else{
		printf("%u", n);
	}
	return 0;
}
