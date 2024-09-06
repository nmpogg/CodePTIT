#include <stdio.h>
int main(){
	long long n;
	scanf("%lld",&n);
	int a=0,b=0;
	for(int i=1;i<n;i++){
		if(n%i==0) a=i;
	}
	for(int i=1;i<a;i++){
		if(n%i==0) b=i;
	}
	if(a&&b){
	printf("%d %d %d",b,a,n);
 	}else printf("THIEU");
}
