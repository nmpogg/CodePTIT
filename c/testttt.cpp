#include <stdio.h>

int main(){
	int n, dem = 0;
	scanf("%d", &n);
	int a[n], tong = 0;
	for(int i = 0; i < n; i++){
		printf("nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		int uoc = 0;
		for(int j = 1; j <= a[i]; j++){
			if(a[i] % j == 0) uoc++;				
		}
		if(uoc == 2){
			dem++;
			tong += a[i];
		}
	}
	printf("%lf", (double) tong / dem);
}
