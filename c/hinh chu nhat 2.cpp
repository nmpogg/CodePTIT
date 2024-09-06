#include <stdio.h>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define re(a) scanf("%d", &a)
#define wr(a) printf("%d", a)
//#define int long long
main(){
	int n, m;
	re(n); re(m);
	for(int i = 1; i <= n; i++){
		wr(i);
		int a = i, b = m, c = i;
		for(int j = 0; j < m - 1; j++){
			if(a < m){
				wr(++a);
			}
			else{
				if(i > m){
					wr(--c);
				}
				else{
				wr(--b);
				}
			}
		}
		puts("");
	}
}
