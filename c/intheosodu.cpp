#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n > 0){
		if(n % 5 == 0){
			printf("%d", 3 * n);
		}
		else if(n % 5 == 2){
			printf("%d",  2 * n);
		}
		else printf("%d", 5 * n);
	}
	else printf("Sai");
	return 0;
}
