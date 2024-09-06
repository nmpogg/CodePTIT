#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>

#define re(a) scanf("%d", &a)
#define wr(a) printf("%d ", a)
#define end puts("")
typedef struct hag{
	int t,d;
}hag;
int cmp(const void *a, const void *b)
{
	hag *x = (hag *) a;
	hag *y = (hag *) b;
	return x->t - y->t;
}
int max(int a, int b)
{
	return (a > b) ? a : b;
}
int main()
{
	int n; scanf("%d", &n);
	hag nguoi[n];
	for(int i = 0; i < n; i ++)
	{
		scanf("%d", &nguoi[i].t);
		scanf("%d", &nguoi[i].d);
	}
	qsort(nguoi,n,sizeof(hag),cmp);
	int tkt = 0;
	
	for(int i = 0; i < n; i ++)
	{
		tkt = max(tkt,nguoi[i].t) + nguoi[i].d;
	}
		printf("%d ", tkt);
	
}
