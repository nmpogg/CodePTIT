#include <stdio.h>

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}
	float tb = (float)sum / n;
	printf("%.3f", tb);
	return 0;
}
