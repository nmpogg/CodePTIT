#include <stdio.h>
#include <math.h>

int prime(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
			break;
		}
	}
	return 1;
}

int orn(int n){
	int swap = 0, du, n1 = n;
	while(n > 0){
		du = n % 10;
		swap = swap * 10 + du;
		n /= 10;	
	}
	if(swap == n1) return 1;
	else return 0;
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++){
			if(prime(i) && orn(i)){
				printf("%d ", i);
				dem++;
			}
			if(dem == 10){
				printf("\n");
				dem = 0;
			}
		}
		printf("\n\n");
	}
}
