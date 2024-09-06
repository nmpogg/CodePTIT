#include<stdio.h>
#include<math.h>
#define ll long long
int add(int n){
	int s =0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int count(int n){
	int dem=0;
	for(int i=1 ; i*i<=n; i++){
			if(n%i==0){
				long long j=n/i;
				if(add(i)%3==0) dem++;
				if(add(j)%3==0 && add(j)!=add(i)) dem++;
				
				
			}
		}
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", count(n));
	}
}
