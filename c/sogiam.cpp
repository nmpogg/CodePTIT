#include <stdio.h>

int checksogiam(long long n){
	int front = -1, behind;
	while(n > 0){
		behind = front;
		front = n % 10;		
		if(front <= behind) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, count = 0;
		scanf("%lld %lld", &a, &b);
		for(long long i = a; i <= b; i++){
			if(checksogiam(i)){
			count++;
			} 
		}
		printf("%lld\n", count);
	}
	return 0;
} 
