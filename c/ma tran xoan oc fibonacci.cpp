#include <stdio.h>
#include <math.h>

long long fibo[100];
void fibonacci(){
	fibo[0] = 0, fibo[1] = 1;
	for(int i = 2; i < 93; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	fibonacci();
	long long a[n][n], cnt = 0;
	int c1 = 0, c2 = n-1, h1 = 0, h2 = n-1;
	
	while(c1 <= c2 && h1 <= h2){
		
		// xay dung hang tren
		for(int i = c1; i <= c2; i++){
			a[h1][i] = fibo[cnt];
			cnt++;
		}
		h1++;
		
		if(c1 <= c2){
			for(int i = h1; i <= h2; i++){
				a[i][c2] = fibo[cnt];
				cnt++;
			}
			c2--;
		}
		
		if( h1 < h2){
			for(int i = c2 ; i >= c1; i--){
				a[h2][i] = fibo[cnt];
				cnt++;
			}
			h2--;
		}
		
		for(int i = h2; i >= h1; i--){
			a[i][c1] = fibo[cnt];
			cnt++;
		}
		c1++;
	}
	
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n ;j++){
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
