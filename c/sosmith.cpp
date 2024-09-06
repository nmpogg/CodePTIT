#include <stdio.h>

int sum(long long n){
	long long digit;
	long long sum = 0;
	while(n > 0){
		digit = n % 10;
		sum += digit;
		n /= 10;
	}
	return sum;
}

int sum_of_factors(long long n){
	long long i  = 2, sum2 = 0;;
	while(n >= 2){		
		if(n % i == 0){
			sum2 += sum(i);
			n /= i;
		}
		else i++;
	}
	return sum2;
}

int main(){
	long long n;
	scanf("%lld", &n);
	if(sum(n) == sum_of_factors(n)) printf("YES");
	else printf("NO");
	return 0;
}
