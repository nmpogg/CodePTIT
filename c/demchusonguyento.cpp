#include<stdio.h> 

int primeNumber(int n){
	if(n < 2)return 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
    		return 0;
		}
	}
	return 1;
} 
		
	int main(){
		long long n;
		scanf("%lld", &n);
		int a[10] = {0};
		while(n > 0){
			int x = n % 10;
			
			if(primeNumber(x)){
			    a[x]++;
			}
			n /= 10;
		}
		
		for(int i = 2; i < 10; i++){
			if(a[i] > 0) printf("%d %d\n", i, a[i]);
		} 
		return 0;
 }
