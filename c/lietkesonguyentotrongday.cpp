#include <stdio.h>
#include <math.h>

int main(){
	int n, k = 0;
	scanf("%d", &n);
	int a[n], b[n];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int count2 = 0;
	for(int i = 0; i < n; i++){
		int count1 = 0;
		if(a[i] < 2) continue;
		for(int j = 2 ;j <= sqrt(a[i]); j++){
			if(a[i] % j == 0){
				count1++; 
				break;
			}		
		}
		if(count1 == 0){ 
			count2++;
			b[k] = a[i];
			k++;		
		}
	}
	printf("%d ", count2);
	
	for(int i = 0; i < k; i++){
		printf("%d ", b[i]);
	}
	
	return 0;
}
