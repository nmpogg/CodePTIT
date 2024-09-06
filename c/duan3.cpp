//nhap vao ma tran kthuoc n x m 
// dua ra man hinh 
//tim phan tu nho nhat 
//nhap vao so k sap xep hang k chieu giam dan
#include<stdio.h>
int main()
{
	int n,m;
	printf("nhap kich thuoc n= ");
	scanf("%d",&n);
	printf("\nnhap kich thuoc m= ");
	scanf("%d",&m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0;j<m;j++){
			printf("nhap a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int min=1e9+1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]<min)
			min=a[i][j];
		}
	}
	printf("phan tu nho nhat la %d",min);
	int k;
	scanf("%d", &k);
	for(int i = 0; i < m-1; i++){
		for(int j = i + 1; j < m; j++){
			if(a[k][i] < a[k][j]){
				int tg = a[k][i];
				a[k][i] = a[k][j];
				a[k][j] = tg;
			}
		}
	}
	for(int i = 0; i < m; i++){
		printf("%d ", a[k][i]);
	}
}

