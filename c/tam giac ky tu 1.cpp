#include<stdio.h>

char c[1000];
void sive()
{
	c[1] = 'a';
	for(int i = 2; i <=99; i ++)
	c[i] = c[i-1] + 1;
}
int main(){
	sive();
	int n;
	scanf("%d", &n);
	int t = 1;
	for(int i = 1; i <= n; i++){
		if( i % 2 == 1)
		{
			for(int j = 1; j <= i; j ++)
			{
				printf("%c ", c[t++] );
			}
		}
		else
		{
			int x = t + i - 1;
			t = x + 1;
			for(int j = 1; j <= i; j ++)
			{
				printf("%c ", c[x--]);
			}			
		}	
		printf("\n");
	}
	return 0;
}
