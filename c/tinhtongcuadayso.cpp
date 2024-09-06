#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if(n <= 0){
		printf("NO");
	}
	else{
		int tong = 0;
		for(int i = 1; i <= n; i++){
			tong = tong + i;
		}
		printf("%d", tong);
	}
	return 0;
}
