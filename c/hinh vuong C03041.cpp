#include<stdio.h>
#define re(t) scanf("%d",&t)
#define wr(t) printf("%d",t)
main()
{
	int t;re(t);
	while(t--)
	{
		int a,b,c,d;
		re(a);re(b);re(c);re(d);
		if(a - c ==  b - d) puts("YES");
		else puts("NO");
	}
}