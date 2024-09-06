#include <stdio.h>

void sapxep(float a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main(){
	int n;
	float a[n];
	FILE *in;
	in = fopen("C:\\Users\\Cuong\\Desktop\\Source.txt", "a+");
	fscanf(in, "%d", &n);
	for(int i = 0; i < n; i++){
		fscanf(in, "%.2f", &a[i]);
	}
	sapxep(a, n);
	for(int i = 0; i < n; i++){
		printf("%.2f ", a[i]);
	}
	fclose(in);
	return 0;
}
