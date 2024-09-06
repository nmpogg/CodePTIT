#include <stdio.h>
#include <math.h>

int main(){
	unsigned long t , snto, i, j, sum;
	scanf("%lu", &t);	
	for(i = 1; i <= t; i++){
		sum = 0;
		scanf("%lu", &snto);
		if(snto < 2) printf("NO");
		for(j = 2; j <= sqrt(snto); j += 1){
			if(snto % j == 0) sum++;			
		}
		if(sum == 0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
