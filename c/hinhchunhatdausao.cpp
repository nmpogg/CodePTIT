#include <stdio.h>

int main(){
	unsigned int a, b, i, j;
	scanf("%u %u", &b, &a);
	for(i = 1; i <= a; i++){
		printf("\n");
		for(j = 1; j <= b; j++){
			if(i == 1 || i == a || j == 1 || j == b)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
