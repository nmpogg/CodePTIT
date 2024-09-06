#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i =0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int max = -1e9;
	int max2 = -1e9;
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max2 = max;
			max = a[i];
		}
		else if(a[i] > max2 && a[i] != max){// de ko bi 2 so lon bang nhau
			max2 = a[i];
		}
	}
	printf("%d\n%d", max, max2);
}
