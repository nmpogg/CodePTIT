#include <stdio.h>

int check_skg(int n){
	int digit_final, digit_ke;
	digit_final = n % 10;
	n /= 10;
	while(n > 0){
		digit_ke = digit_final;
		digit_final = n % 10;
		if(digit_final > digit_ke) return 0;
		n /= 10;		
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	if(check_skg(n)) printf("yes");
	else printf("no");
}
