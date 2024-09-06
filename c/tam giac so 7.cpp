#include <stdio.h>

int main()
{
	int n; 
	scanf("%d", &n);
	
	for(int i = 0; i < n; i ++)
	{
		printf("%d ", i+1);
		int t = n - 1;
		int x = i + 1;
		for(int j = 0; j < i; j++)
		{
			x += t;
			printf("%d ", x);
			t--;
		}		
		printf("\n");
	}
	return 0;
}
