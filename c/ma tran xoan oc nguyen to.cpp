#include <stdio.h>
#include <math.h>

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int b[500];
void nto(){
	int k = 0;
	for(int i = 2; i < 2000; i++){
		if(prime(i)) b[k++] = i;
	}
}

int main(){
	int t;
	scanf("%d", &t);
	nto();
	for(int h = 1; h <= t; h++){
		int n;
		scanf("%d", &n);
		int a[n][n], cnt = 0;
		int c1 = 0, c2 = n-1, h1 = 0, h2 = n-1; 
		while(c1 <= c2 && h1 <= h2){		
			//xay dung canh tren
			for(int i = c1; i <= c2; i++){
				a[h1][i] = b[cnt];
				cnt++;
			}
			h1++;
			
			// xay dung canh phai
			if(c1 <= c2){
				for(int i = h1; i <= h2; i++){
					a[i][c2] = b[cnt];
					cnt++;
				}
				c2--;
			}
			
			//xay dung canh duoi
			if(h1 <= h2){
				for(int i = c2; i >= c1; i--){
					a[h2][i] = b[cnt];
					cnt++;
				}
				h2--;
			}
			
			for(int i = h2; i >= h1; i--){
				a[i][c1] = b[cnt];
				cnt++;
			}
			c1++;
		}
		printf("Test %d:\n", h);
		for(int i = 0 ; i < n; i++){
			for(int j = 0; j < n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
