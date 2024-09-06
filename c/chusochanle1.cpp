#include <stdio.h>

int main(){
	unsigned long n, le = 0, chan = 0,i;
	scanf("%lu", &n);
	 while(n > 0){
	 	if(n % 2 == 0) chan += 1;
	 	if(n % 2 == 1) le += 1;
	 	n /= 10;
	 }
	 printf("%lu %lu", le, chan);
	 return 0;
}
