#include <stdio.h>

int main(){
	unsigned long a, b, t, TG;
	scanf("%lu", &t);
	
	while(t > 0){
		scanf("%lu %lu", &a, &b);
		if(a > 0 && b > 0){
			for(a = 1; a != b; a -= b){
				if(a < b){
					TG = a;
					a = b;
					b = TG;
				}
			}
			printf("%lu\n", b);
		}
		t--;
	}
	return 0;
}
