#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#define int long long
#define re(a) scanf("%lld", &a)
#define wr(a) printf("%lld", a)
#define endl puts("");
main()
{
	int n; 
	scanf("%lld", &n);
	int a[2*n-1][2*n-1];
	int t = n;
	int x = 0, y = 0;
	int z = 2*t-1;
	while(t){
		for(int i = x; i < z ; i ++)
			for(int j = y; j < z; j ++)
				if(i == x || i == z-1   || j == y || j == z-1 )
					a[i][j] = t;
		x++; y++;
		z--; t--;
		}
	for(int i = 0; i < 2*n-1; i ++)
	{
		for(int j = 0; j < 2*n-1; j ++)
		printf("%lld", &a[i][j]);
		puts("");
	}
	return 0;
}
