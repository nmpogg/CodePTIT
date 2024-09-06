#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n); 
	for(int i = 1; i <= n; i ++)
	{
		if(i % 2 == 0)
			for(int j = 0; j < i*2; j += 2) printf("%d", j+2);
		else
			for(int j = 0; j < i*2; j += 2) printf("%d", j+1);
		puts("");
	}
	return 0;
}
