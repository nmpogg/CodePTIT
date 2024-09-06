//nhap vao ma tran n x m
//dua ra man hinh ma tran nhap 
//tim phan tu nhor nhat
//nhap vao so k, sx hang k theo chieu giam dan
#include<stdio.h>
int main()
{
	int m,n;
	printf("nhap n= ");
	scanf("%d",&n);
	printf("nhap m= ");
	scanf("%d",&m);
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int min = 1e9;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < m; j++){
			if(a[i][j] < min ) min = a[i][j];
		}
	}
	 printf("phan tu nho nhat la: %d", min);
	//sap xep hang k theo chieu giam dan 
	int k;
	printf("nhap hang thu k= ");
	scanf("%d",&k);
	int tg;
	for(int i = 0; i < m-1; i++){
		for(int j = i+1; j < m; j++){
			if(a[k-1][i] > a[k-1][j]){
				tg = a[k-1][i];
				a[k-1][i] = a[k-1][j];
				a[k-1][j] = tg;
			}
		}
	}
	printf("mang sau khi sap xep la: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
