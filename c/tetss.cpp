#include <stdio.h>

int main(){
	int n;
	double x;
	printf("Nhap so thuc x: ");
	scanf("%lf", &x);
	printf("\nNhap so nguyen duong n: ");
	scanf("%d", &n);
	double sum = x + (n * (n+1) / 2 + n * x) * (n * (n+1) / 2 + n * x);
	
	printf("%lf", sum);
}
