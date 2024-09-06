#include <stdio.h>
#include <math.h>

int check(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}	
	}
	return 1;
}

int main(){
	int a;
	scanf("%d", &a);
	for(int j = 2; j <= a; j++){
		if(check(j)) printf("%d\n", j);
	}
	return 0;
}
