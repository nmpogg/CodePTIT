#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define MIN 1000000000000000001
//#define re(a) scanf("%d",&a)
void re(int* x)
{
    *x = 0; int f = 1;
    char ch = getchar_unlocked();
    while (!isdigit(ch)) f = ch == '-' ? - f : f, ch = getchar_unlocked();
    while (isdigit(ch)) *x = *x * 10 + ch - '0', ch = getchar_unlocked();
    *x *= f;
}
int a[100000];
void input(int a[],int n){
	for(int i=0; i<n; i++){
		re(&a[i]);
	}
}
int cmp(const void *a, const void *b)
{
	int x = *(int*) a;
	int y = *(int*) b;
	return(x - y);
}

void solve(int a[], int n){
	int cnt=0;
	long long minSub = MIN;
	qsort(a,n,sizeof(int),cmp);
	for(int i = 0; i < n-1; i++){
		if(abs(a[i]-a[i+1]) < minSub){
			minSub = abs(a[i]-a[i+1]);
	//		printf("%lld ",minSub);
			}
			
	}
	for(int i = 0; i < n-1; i++)
				if(abs(a[i]-a[i+1]) == minSub)
				cnt++;
		
	printf("%lld %d\n",minSub,cnt) ;
}

main(){
	int t, n;
	re(&t);
	while(t--){
		re(&n);
		input(a, n);
		solve(a, n);
	}
}
