#include <stdio.h>

int main(){
	int x, n = 0;
	scanf("%d", &x);
	if(x > 0){
		int sum = 0;
		while(sum <=x){
			n++;
			sum += n;
		}
		printf("%d", n);
	}
	else printf("NO");
	return 0;
}
