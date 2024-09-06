#include <stdio.h>
int main(){
	unsigned long long t, n, le, chan;
	scanf("%llu", &t);
	
	while(t > 0){
		chan = 0;
		le = 0;
		scanf("%llu", &n);
		if(n % 2 == 0){
			while(n >0){
				if((n % 10) % 2 == 0)
					chan++;
				else le++;
				n /= 10;
			}
		}
		else{
		 printf("NO\n");
		goto here;
		}
	if(le == 0) printf("YES\n");
	else printf("NO\n");
	here:
	t--;
	}
	return 0;
}
