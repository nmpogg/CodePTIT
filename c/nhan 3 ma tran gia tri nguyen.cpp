#include<stdio.h>

void nhap(int a[][200], int m, int n)
{
	for(int i = 0; i < m; i ++)
		for(int j = 0; j < n; j ++)
			scanf("%d", &a[i][j]);
}
void xuat(int a[][200], int m, int n)
{
	for(int i = 0; i < m; i ++)
	{
		for(int j = 0; j < n; j ++)
			printf("%d ", a[i][j]);
		printf("\n");
	}	
}
void nhan(int a[][200], int m, int n, int b[][200], int p, int c[][200])
{
	for(int i = 0; i < m; i ++)
	{
		for(int j = 0; j < p; j ++)
		{
			c[i][j] = 0;
			for(int k = 0; k < n; k++)
			c[i][j] += a[i][k]*b[k][j];
		}
	}
}
int main()
{
	int m, n, p, q;
	scanf("%d", &m); 
	scanf("%d", &n); 
	scanf("%d", &p); 
	scanf("%d", &q);
	int a[m][200], b[n][200], c[p][200], d[m][200];
	nhap(a,m,n);
	nhap(b,n,p);
	int kq[m][200];
	nhan(a,m,n,b,p,kq);
	nhap(c,p,q);
	nhan(kq,m,p,c,q,d);
	xuat(d,m,q);
	
}
