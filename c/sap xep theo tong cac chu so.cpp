#include <stdio.h>

int sum(long long n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	long long a[n];
	for(int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	for(int i = 0 ; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(sum(a[i]) > sum(a[j])){
				long long temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%lld ", a[i]);
	}
	return 0;
}
