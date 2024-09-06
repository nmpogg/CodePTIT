#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int i, j;
	for(i = 1; i <= a; i++){
		for(j = i; j <= b; j++){
			printf("%d", j);
		}
		if(i > b){
			printf("%d", i);
			for(j = b - 1; j > 0; j--){
				printf("%d", j);
			}
		}
		else{
			for(j = i - 1; j > 0; j--){
				printf("%d", j);
			}
		}
		printf("\n");
	}
}
