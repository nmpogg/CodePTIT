#include<stdio.h> 
#include<math.h>
 int main(){ 
 	int a,b ; 
	scanf("%d%d", &a, &b); 
	int s=sqrt(a); 
 	s=(s*s==a) ? s : s+1 ; 
 	int k=sqrt(b); 
	int i; 
 	printf("%d",k-s+1); 
 	for(i=s;i<=k;i++){
  		printf("\n%d",i*i); 
  	} 
 	 return 0 ; 
  }
