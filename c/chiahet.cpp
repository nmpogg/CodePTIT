#include <stdio.h>

int check(int a, int b){
	long long giaithua = 1;
	for(int i = a; i > 0; i--){
		giaithua *= i;
	}
	if(a == 0) giaithua =1;
	long long mu = 1;
	for(int i = 1; i <= b; i++){
		mu *= 2;
	}
	if(b == 0) mu = 1;
	if(giaithua % mu == 0) return 1;	
	else return 0;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	if(check(n, k)) printf("Yes\n");
	else printf("No");
	return 0;
}
