#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c, d, x, y, s, canh;
	scanf("%d %d", &a, &b);
	scanf("%d %d", &c, &d);
	scanf("%d %d", &x, &y);
	s = a * b + c * d + x * y;
	canh = sqrt(s);
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;
	if(x > max) max = x;
	if(y > max) max = y; 
	if(s == canh * canh || canh >= max){
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}
