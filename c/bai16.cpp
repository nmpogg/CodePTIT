#include <stdio.h>

int main(){
	int a, b, c, d, x, y, z ,t , wMax, hMax, wMin, hMin, h, w;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d %d", &x, &y, &z, &t);
	wMax = c;
	if(z > wMax){
		wMax = z;
	}
	hMax = d;
	if(t > hMax){
		hMax = t;
	}
	wMin = a;
	if(x < wMin){
		wMin = x;
	}
	hMin = b;
	if(y < hMin){
		hMin = y;
	}
	h = hMax - hMin;
	w = wMax - wMin;
	if(h >= w){
		printf("%d", h * h);
	}
	else printf("%d", w * w);
	return 0;
	
}
