#include <stdio.h>

// kiem tra 1 mang co doi xung hay khong 
int check(int a[], int n){
	int left= 0, right = n - 1;
	while(left < right){
		if(a[left] != a[right]) return 0;
		++left;
		--right;
	}
	return 1;
}



// kiem tra mang co phai mang tang hay khong
int check2(int a[], int n){
	for(int i = 0; i < n-1; i++){
		if(a[i] >= a[i+1]) return 0;
	}
	return 1;
}



