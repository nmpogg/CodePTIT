#include <stdio.h>
#include <math.h>

int main(){
	unsigned long t, n, i, souoc;
	scanf("%lu", &t);
	while(t > 0){
		scanf("%lu", &n);
		souoc = 0;
		for(i = 1; i <= sqrt(n); i++){
			if(n % i == 0){
				if(i % 2 == 0) souoc++;
				if(i != n / i && (n / i) % 2 == 0) souoc++;
			}
		}
		printf("%lu\n", souoc);
		t--;
	}
	return 0;
}
