#include<stdio.h>
#include<string.h>
void dn(char s[])
{
	char st[1000]="",j=0;
	for (int i=strlen(s)-1;i>=0;i--)
	st[j++]=s[i];
	strcpy(s,st);
}
void cd(char s[],int d)
{
	dn(s);
	for (int i=1;i<=d;i++)
	strcat(s,"0");
	dn(s);
}
void solve(char s[],char st[])
{
	if (strlen(s)>strlen(st)) cd(st,strlen(s)-strlen(st));
	else cd(s,strlen(st)-strlen(s));
	int x,y,nho=0,res,j=strlen(s);
	char kq[1000]="";
	char p;
	for (int i=strlen(s)-1;i>=0;i--)
	{
		x=s[i]-'0';
		y=st[i]-'0';
		res=(x+y+nho)%10;
		nho=(x+y+nho)/10;
		p=res+'0';
		kq[--j]=p;
	}
	if (nho==1)
	{
		dn(kq);
		strcat(kq,"1");
		dn(kq);
	}
	printf("%s\n",kq);
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
    char s[1000],st[1000];
    scanf("%s",s);
    scanf("%s",st);
    solve(s,st);
	}
	return 0;
}
