#include <stdio.h>

int prime[1000001];

void sang_nguyen_to(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i < 1000; i++){
		if(prime[i]){
			// duyet tat ca cac boi so cua i va cho no khong la so nguyen to
			for(int j = i*i; j <= 1000000; j+=i){
				prime[j] = 0;// j khong con la so nguyen to nua
			}
		}
	}
}
