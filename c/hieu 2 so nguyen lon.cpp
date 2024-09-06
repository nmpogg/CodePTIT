#include <stdio.h>
#include <string.h>

void daonguoc(int c[], int n){
	int l = 0, r = n-1;
	while(l < r){
		int temp = c[l];
		c[l] = c[r];
		c[r] = temp;
		l++;
		r--;
	}
}

void hieu(char a[], char b[]){
	int n1 = strlen(a), n2 = strlen(b), n = 0;
	int x[n1], y[n1], z[n1];
	
	for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	
	daonguoc(x, n1);
	daonguoc(y, n2);
	
	for(int i = n2; i < n1; i++) y[i] = 0;
	
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int temp = x[i] - y[i] - nho;
		if(temp < 0){
			z[n++] = temp + 10;
			nho = 1;
		}
		else{
			z[n++] = temp;
			nho = 0;
		}
	}
	while(z[n-1] == 0){
		n--;
	}
	
	for(int i = n-1; i >= 0; i--){
		printf("%d", z[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char c[1001], d[1001];
		gets(c);
		gets(d);
		
		if(strlen(c) > strlen(d) || strlen(c) == strlen(d) && strcmp(c, d) > 0) hieu(c, d);
		else hieu(d, c);
		printf("\n");
	}
}
