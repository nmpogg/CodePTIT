//dua ra cac so hoan hao <1000 ra man hinh
#include<stdio.h>
int check(int n)
{
	int i,s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0){
		s=s+i;
		}
	}
	if(n==s)
		return 1;
	else 
	return 0;
}
int main()
{
	int i,a[100],n;
	printf("nhap n= ");
	scanf("%d",&n);
	printf("cac so hoan hao <1000 la: \n");
	for(i=1;i<=n;i++)
	{
		if(check(i)) printf("%d ", i);
	}
	
}
