#include<stdio.h>
#include<math.h>

int nto(int n)
{
	if (n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i ==0) return 0;
	} 
	return 1;
}
int tcs(int n)
{
	int t=0;
	while (n!=0)
	{
		t+=n%10;
		n=n/10;
	}
	return t;
}

int main()
{
	int n;
	scanf("%d",&n);
	int kt=0;
	for (int i=pow(10,n-1);i <= (pow(10,n)-1) ;i++)
	if (nto(i)&& nto(tcs(i))) 
	{
	printf("%d ",i);
	kt=1;
	}
	if (!kt) printf("0");
}
