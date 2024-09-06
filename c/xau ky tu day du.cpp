#include <stdio.h>
#include <string.h>

int lis(char c[]){
	int lis[strlen(c)];
	
	for(int i  = 0; i < strlen(c); i++){
		lis[i] = 1;
		for(int j  = 0; j < i; j++){
			if(c[i] > c[j] && lis[i] < lis[j]+1){
				lis[i] = lis[j] + 1;
			}
		}
	}
	
	int res = 0;
	for(int i = 0; i < strlen(c); i++){
		if(lis[i] > res) res = lis[i];
	}
	return 26-res;
}

int main(){
    char a[51];
    gets(a);
    printf("%d", lis(a));
    return 0;
}

