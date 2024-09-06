#include<stdio.h>

int main()
{
	int n; 
	scanf("%d", &n);
	int a, b;
	int minUp = 50001, minDown = 50001;
	int s1 = 0, s2 = 0;
	while(n--)
	{
		scanf("%d", &a);
		s1 += a;
		if(minUp > a) minUp = a;
		scanf("%d", &b);
		s2 += b;
		if(minDown > b) minDown = b;	
	}
	s1 += minDown;
	s2 += minUp;
	if(s1 > s2) printf("%d ", s1);
	else printf("%d ", s2);
	return 0; 
}
