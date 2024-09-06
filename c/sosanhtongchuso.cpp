#include <stdio.h>

int comparison(int a, int b){
	int digit_a, digit_b;
	int cnta = 0, cntb = 0;
	while(a > 0){
		digit_a = a % 10;
		cnta += digit_a;
		a /= 10;
	}
	while(b > 0){
		digit_b = b % 10;
		cntb += digit_b;
		b /= 10;
	}
	if(cnta > cntb) return 1;
	if(cnta <= cntb) return 0;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(comparison(a, b)) printf("%d %d", b, a);
	else printf("%d %d", a, b);
}
