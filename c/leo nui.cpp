#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define int long long
#define re(a) scanf("%lld", &a)
#define wr(a) printf("%lld ", a)
main()
{
	int n; re(n);
	int a, b;
	int minUp = 50001, minDown = 50001;
	int s1 = 0, s2 = 0;
	while(n--)
	{
		re(a);
		s1 += a;
		if(minUp > a) minUp = a;
		re(b);
		s2 += b;
		if(minDown > b) minDown = b;	
	}
	s1 += minDown;
	s2 += minUp;
	if(s1 > s2) wr(s1);
	else wr(s2);
}