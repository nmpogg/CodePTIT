#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int min(int a, int b)
{
	return (a < b) ? a : b;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
 int main()
{
	int n; scanf("%d", &n);
	int m; scanf("%d", &m);
	int k; scanf("%d", &k);
	int y = 2*k+1;
	bool sag[1001];
	memset(sag,false,sizeof(sag));
	while(m--)
	{
		int t;
		scanf("%d", &t);
		for(int i = max(1,t - k); i <= min(n,t + k) ; i ++)
		sag[i] = true;
	} 
	int dem = 0, den = 0;
	for(int i = 1; i <= n; i ++)
	{
		if(!sag[i])
			dem++;
		else
		{
			if(dem > 0)
			{	
				den += dem/y + ((dem % y == 0) ? 0 : 1);
				dem = 0;
			}
		}
	}
	if(dem > 0) den += dem/y + ((dem % y == 0) ? 0 : 1);
	printf("%d ", den);
	
	
}
