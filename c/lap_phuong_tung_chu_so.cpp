#include <stdio.h>
#include <math.h>

int check(int n){
	int sum = 0, copy = n;
	while(n > 0){
		int res = n % 10;// 153 res = 3   res = 5   res = 1
		sum = sum + (int)pow(res, 3); 
		n = n / 10; // n =153  n =15    n  =1 
	}
	if(sum == copy) return 1;
	return 0;
}

int main(){
	int m, n;
	printf("Nhap khoang: \n");
	scanf("%d %d", &m, &n);
	for(int i = m; i <= n; i++){
		if(check(i)) printf("%d ", i);
	}
	return 0;
}
