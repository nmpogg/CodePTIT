#include <stdio.h>

int test(int n){
	int sum = 0, du;
	while(n > 0){
		du = n % 10;
		sum += du;
		n /= 10;
	}
	if(sum % 10 == 0) return 1;
	else return 0;
}

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(test(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
