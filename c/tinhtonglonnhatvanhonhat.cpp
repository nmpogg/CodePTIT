#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long x1, x2;
		long long min , max;
		scanf("%lld %lld", &x1, &x2);
		long long x1s, x2s;
		x1s = x1;
		x2s = x2;
		long long k1, minx1 = 0;
		int p1 =0;
		while(x1 > 0){
			k1 = x1 % 10;
			if(k1 == 6) k1 = 5;
			minx1 += k1 * (long long)pow(10, p1);
			p1++;
			x1 /= 10;
		}
		long long k2, maxx1 = 0; 
		int p2 = 0;
		while(x1s > 0){
			k2 = x1s % 10;
			if(k2 == 5) k2 = 6;
			maxx1 += k2 * (long long)pow(10, p2);
			p2++;
			x1s /= 10;
		}
		long long k3, minx2 = 0;
		int p3 = 0; 
		while(x2 > 0){
			k3 = x2 % 10;
			if(k3 == 6) k3 = 5;
			minx2 += k3 * (long long)pow(10, p3);
			p3++;
			x2 /= 10;
		}
		long long k4, maxx2 = 0; 
		int p4 = 0;
		while(x2s > 0){
			k4 = x2s % 10;
			if(k4 == 5) k4 = 6;
			maxx2 += k4 * (long long)pow(10, p4);
			p4++;
			x2s /= 10;
		}
		max = maxx1 + maxx2;
		min = minx1 + minx2;
		printf("%lld %lld\n", min, max);
	}
	return 0;
}
