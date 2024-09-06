#include <stdio.h>
#include <math.h>

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 2; n > 0; i++){
		if(check(i)){
			printf("%d\n", i);
			n--;
		}
	}
	return 0;
}
