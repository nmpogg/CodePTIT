#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int count = 0;
		for(int i = 9; i >= 0; i--){
			if(n >= a[i]){
				count += n / a[i];
				n %= a[i];				
			}
		}
		printf("%d", count);
		printf("\n");
	}
	return 0;
}
