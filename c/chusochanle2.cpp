#include <stdio.h>

int main(){
	unsigned long t, n, chan, le;
	scanf("%lu", &t);
	while(t > 0){
		scanf("%lu", &n);
		chan = 0;
		le = 0;
		while(n > 0){
			if(n % 2 == 0) chan += 1;
			if(n % 2 == 1) le += 1;
			n /= 10;
		}
		printf("%lu %lu\n", le, chan);
		t--;
	}
	return 0;
}
