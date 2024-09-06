#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){	
		char a[20];
		getchar();
		gets(a);
		int check = 1;
		for(int i = 0; i < strlen(a); i++){
			if(a[i] != '0' && a[i] != '1' && a[i] != '2'){
				check = 0;
				break;
			}
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
