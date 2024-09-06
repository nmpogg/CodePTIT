#include <stdio.h>

int main(){
	unsigned int t;
	scanf("%u", &t);	
	while(t > 0){
		unsigned long n;
		double thapphan;
		scanf("%lu", &n);		
		thapphan = 1.00 / n;
		printf("%.15lf\n", thapphan);
		t--;
	}
	return 0;
	
	
	
}
