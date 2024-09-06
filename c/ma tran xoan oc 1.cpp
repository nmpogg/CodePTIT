#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	int c1 = 0, c2 = n-1, h1= 0, h2 = n-1;
	int cnt = 1;
	
	while(c1 <= c2 && h1 <= h2){
		//xay dung canh tren
		for(int i = c1; i <= c2; i++){
			a[h1][i] = cnt;
			cnt++;
		}
		h1++;
		
		//xaydungcanh phai
		if(c1 <= c2){
			for(int i = h1; i <= h2; i++){
				a[i][c2] = cnt;
				cnt++;
			}
			c2--;
		}
		
		//xay dung canh duoi
		if(h1 <= h2){
			for(int i = c2; i >= c1; i--){
				a[h2][i] = cnt;
				cnt++;
			}
			h2--;
		}
		
		//xay dung canh trai
		for(int i = h2; i >= h1; i--){
			a[i][c1] = cnt;
			cnt++;
		}
		c1++;
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
