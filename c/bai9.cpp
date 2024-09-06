#include <stdio.h>

int main(){
	int songay, nam, tuan, ngay;
	scanf("%d", &songay);
	nam = songay / 365;
	tuan = songay % 365 / 7;
	ngay = songay % 365 % 7;	
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}
