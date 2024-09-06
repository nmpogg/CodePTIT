#include <stdio.h>

int main(){
	unsigned int n;
	scanf("%u", &n);
	unsigned int a[n], chan = 0, le = 0, i = 0;
	for(i = 0; i < n; i++){
		scanf("%u", &a[i]);
		if(a[i] % 2 == 0) chan++;
		else le++;
	}
	printf("%u\n%u", chan, le);
	return 0;
} 
