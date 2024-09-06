#include <stdio.h>

int main(){
	int n, min1, min2, i;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	min1 = a[0];
	min2 = a[1];
	for(i = 2; i < n; i++){
		if (a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if (a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
	}
	
	printf("%d %d",min1, min2);
	return 0;
}
