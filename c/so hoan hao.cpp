#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	scanf("%d", &n);
	int n1 = n;
	for(int i = 1; i < n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	if(n1 == sum) printf("1");
	else printf("0");
	return 0;
}
