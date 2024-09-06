#include<string.h>
#include<stdbool.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#define re(a) scanf("%d\n", &a)
#define wr(a) printf("%d ", a)

int main()
{
	int t=1; scanf("%d\n", &t);

	while(t--)
	{
	int n;
	int i = 0;
	int c = 0;
	int l = 0;
	char s[20005];
	fgets(s,sizeof(s),stdin);
	int a[2001];
	memset(a,0,sizeof(a));

	for(int k = 0; k < strlen(s);)
	{
		while(isdigit(s[k]))
		{
		a[i] = a[i]* 10 + (s[k] - '0');
		k++;	
		}
		if(!isdigit(s[k]))
		{
			i++;
		}
		
		k++;

	}

	for(int k = 0; k < i; k++ )
	{
		if(a[k]%2==0) c++;
		else l++;
	}
	 
	if(i % 2 == 0 && c > l) printf("YES\n");
	else if(i % 2 == 1 && l > c) printf("YES\n");
	else printf("NO\n");
	}
	return 0;
}
