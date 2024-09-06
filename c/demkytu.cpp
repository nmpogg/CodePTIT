#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int count_alpha = 0, count_num = 0, count_char = 0;
	char a[1000001];
	gets(a);
	for(int i = 0; i < strlen(a); i++){
		if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z')) count_alpha++;
		else if(a[i] >= '0' && a[i] <= '9') count_num++;
		else count_char++;
	}
	printf("%d %d %d", count_alpha, count_num, count_char);
	return 0;
}
