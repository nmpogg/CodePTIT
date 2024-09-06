#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n-1; i++){
		int check = 0;
		for(int j = 0; j < n-i-1; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				check = 1;
			}
		}
		if(check){		
			printf("Buoc %d: ", i + 1);
			for(int k = 0; k < n; k++){
				printf("%d ", a[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
