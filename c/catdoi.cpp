#include <stdio.h>
#include <math.h>

int main(){
	unsigned int t;
	scanf("%u", &t);
	while(t > 0){
		unsigned long long n, sodu, x = 0;
		scanf("%llu", &n);
		int i = 0;		
		while(n > 0){
			sodu = n % 10;
			if(sodu == 0) sodu = 0;					
			else if(sodu == 1) sodu = 1;
			else if(sodu == 8 || sodu == 9) sodu = 0;
			else{
				x = 0;
				break;
			}
			x += sodu * pow(10, i);
			++i;
			
			n /= 10;
		}
		if(x == 0) printf("INVALID\n");
		else printf("%llu\n", x);
		t--;
	}
	return 0;
}
