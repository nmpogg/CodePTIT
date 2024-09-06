#include <stdio.h>

int UCLN(int a, int b){
	while(a != b){
		if(a > b) a = a - b;
		if(a < b) b = b - a;
	}
	return a;
}

int check(int a, int b){
	if(a != b && UCLN(a, b) == 1) return 1;
	else return 0;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = a; i <= b; i++){
		for(int j = i+1; j <= b; j++){
			if(check(i, j)) printf("(%d,%d)\n", i, j);
		}
	}
	return 0;
}
