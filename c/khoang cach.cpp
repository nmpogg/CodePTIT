#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c, d;
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		double kc = sqrt(pow((c-a), 2) + pow((d-b), 2));
		printf("%.4lf\n", kc);
	}
	return 0;
}
