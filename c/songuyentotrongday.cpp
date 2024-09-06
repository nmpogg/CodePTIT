#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(a[i] >= 2){
				int dem = 1;
				for(int j = 2; j <= sqrt(a[i]); j++){
					if(a[i] % j == 0){
						dem = 0;
						break;
					}
				}
				if(dem) printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
