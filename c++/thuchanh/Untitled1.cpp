#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,cv;
	float dt,p;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	if(c<a+b && a<b+c && b<c+a)
	{
		if(a==b||a==c||b==c)
		printf("tam giac can");
		else if(a==b==c)
		printf("tam giac deu");
		else if(a==sqrt(b*b+c*c)||b==sqrt(a*a+c*c)||c==sqrt(a*a+b*b))
		printf("tam giac vuong");
		else if(a==sqrt(2*b*b)||a==sqrt(2*c*c)||b==sqrt(2*a*a)||b==sqrt(2*c*c)||c==sqrt(2*a*a)||c==sqrt(2*b*b))
		printf("tam giac vuong can");
	cv=a+b+c;
	p=(float)cv/2;
	dt=(float)sqrt(p*(p-a)*(p-b)*(p-c)); 
	printf("\nchu vi tam giac la %d",cv);
	printf("\ndien tich tam giac la %f",dt);
	}
	else
	printf("khong phai tam giac");
}

