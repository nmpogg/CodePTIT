#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
	       scanf("%d", &n);
	       m = sqrt(n);
	       if(n == pow(m,2)){
		       printf("YES\n");
	        }
            else printf("NO\n");
	}
	return 0;
}
