//so thuan nghich va chia het cho 10 
#include<stdio.h>
#include<math.h>
int tn(long long n){
	long long rev=0,m=n;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	if(rev == m) return 1;
	return 0;
}
int check10(int n){
	int sum = 0, res = 0;
	while (n > 0){
		res = n % 10;
		n/=10;
		sum+=res;
	}
	if(sum % 10==0) return 1;
	return 0;
}
int dem(int n){
	int cnt =0;
	int start=pow(10,n-1);
	int end = pow(10,n);
	for(int i=start;i<end;i++){
		if(check10(i) && tn(i)) cnt++;
	}
	return cnt;
}
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("nhap a[%d]",i);
		scanf("%d",&a[i]);
		printf("%d\n",dem(a[i]));
	}
}
