#include <stdio.h>

int main(){
	unsigned long long t, n, le, chan, n1;
	scanf("%llu", &t);
	while(t > 0){
		chan = 0;
		le = 0;
		scanf("%llu", &n);
		n1 = n;
		while(n > 0){
			if(n % 2 == 0) chan++;
			else le++;
			n /= 10;
		}
		if(n1 % 2 == 0 && chan > le) printf("YES\n");
		else printf("NO\n");
		t--;
	}
	return 0;
}
