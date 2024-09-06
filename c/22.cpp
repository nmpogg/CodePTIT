#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	int ok2=1;
	for(int i=0;i<n;i++){
		int ok=1;
		for(int j=2;j<a[i];j++){
			if(a[i]%j==0){
			ok=0; 
			break;
				}
		}
		if(ok && a[i]>1){
		 printf("%lld ",a[i]);
		 ok2=0;
		}
	}
	if(ok2) printf("0");

}
