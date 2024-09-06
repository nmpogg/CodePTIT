#include <stdio.h>

int main(){
	int t, ucln, bcnn;
	scanf("%d", &t);
	while(t > 0){
		long long a, b;		
		scanf("%lld %lld", &a, &b);
		int a1 = a;
		int b1 = b;
		if(a > 0 && b > 0){
			while(a != b){
				if(a < b){
					int tg = a;
					a = b;
					b = tg;
				}
				a = a - b;
			}
			ucln = b;
			bcnn = (a1 * b1) / ucln;
			printf("%lld %lld\n", bcnn, ucln);
		}
		else printf("Nhap sai\n");
		t--;
	}
	return 0;
}
