#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define end puts("")
#define re(a) scanf("%lld", &a)
#define wr(a) printf("%lld", a)
#define int long long
int max (int a, int b)
{
	return (a > b) ? a : b;
}

main()
{
	int a, b;
	re(a), re(b);
	int t = max(a, b);
	for(int i = a; i >= 1; i --)
	{
		int dem = 0;
		for(int j = t; j >= max(t - b + 1, 1); j --)
		{
			wr(j);
			dem ++;
		}
		t--;
		for(int k = 2; k <= b - dem + 1; k ++) wr(k);
		end;
	}
	
	
}