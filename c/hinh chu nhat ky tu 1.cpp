#include <stdio.h>
#include <ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define re(a) scanf("%d", &a)
#define wr(a) printf("%d ", a)
//#define int long long
main(){
	int a, b; 
	re(a);  re(b); 
		if(a < b) {
			for(int i = b; i >= b - a  +  1; i--){
				for(int j = b; j > 0; j--){
					if(j < i) putchar(i + 96); 
					else putchar(j + 96); 
				}
			puts(""); 
			}
		}
		else if(a  ==  b){
			for(int i = a; i >= 1; i--){
				for(int j = b; j > 0; j--){
					if(j < i) putchar(i + 96); 
					else putchar(j + 96); 
				}
			puts(""); 
			}	
		}
		else if(a > b) {
			for(int i = a; i >= 1; i--){
				for(int j = a; j >= (a - b  +  1); j--){
					if(j < i) putchar(i + 96); 
					else putchar(j + 96); 
				}
			puts(""); 
			}
		}
}
