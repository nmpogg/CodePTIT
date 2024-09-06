#include <stdio.h>

int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n , m, i;
		scanf("%d %d %d", &n, &m, &i);
		int a[n][m];
		
		for(int h = 0; h < n; h++){
			for(int c = 0; c < m; c++){
				scanf("%d", &a[h][c]);
			}
		}
		
		for(int h = 0; h < n-1; h++){
			for(int j = h+1; j < n ;j++){
				if(a[j][i-1] < a[h][i-1]){
					int temp = a[j][i-1];
					a[j][i-1] = a[h][i-1];
					a[h][i-1] = temp;
				}
			}
		}
		for(int h = 0; h < n; h++){
			for(int c = 0; c < m; c++){
				printf("%d ", a[h][c]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
