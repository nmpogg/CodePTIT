#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int t = 1;
	for(int i = 1; i <= n; i++){
		if( i % 2 == 1)
		{
			for(int j = 1; j <= i; j ++)
			{
				printf("%d ", t++);
			}
		}
		else
		{
			int x = t + i - 1;
			t = x + 1;
			for(int j = 1; j <= i; j ++)
			{
				printf("%d ", x--);
			}
		}
		printf("\n");
	}
	return 0; 
}

