#include <stdio.h>

int main(){
	int n;
	FILE *a, *b;
	a = fopen("C:\\Users\\Cuong\\Desktop\\Number.txt", "r");
	fscanf(a, "%d", &n);
	int pog[100];
	int i = 0;
	while(n > 0){
		pog[i] = n % 2;
		n /= 2;
		i++;
	}
	for(int j = i-1; j >= 0; j--){
		printf("%c ", pog[j] + 48);
	}
	fclose(a);
}
