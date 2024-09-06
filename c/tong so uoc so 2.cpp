#include<stdio.h>
#include<math.h>
#define ll long long
int add(long long n){
	int s = 0;
	while(n > 0){
		s += n % 10;
		n /= 10;
	}
	return s;
}
int count(long long n){
	int dem = 0;
	for(long long i = 1 ; i*i <= n; i++){
			if(n % i == 0){
				long long j = n / i;
				if(add(i) % 3 == 0 && add(j) % 3 == 0 && add(i) != add(j)) dem+=2;
				else if(add(i) % 3 == 0 && add(j) % 3 == 0 && add(i) == add(j)) dem++;
				else if(add(i) % 3 == 0) dem++;
				else if(add(j) % 3 == 0) dem++;
				
				
			}
		}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%d\n", count(n));
	}
	return 0;
}
