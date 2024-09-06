#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int check(int n){
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(prime(i)) cnt++;
			if(i != n/i && prime(n/i)) cnt++;
		}
		if(cnt >= 3) return 1;
	}
	return 0;
}


int tong(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum % 10 == 8;
}

int main(){
	int t;
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	int flag = 1;
	for(int i = a; i <= b; i++){
		if(tong(i) && check(i)){
			cout << i << " ";
			flag = 0;
		}
	}
	if(flag) cout << "28tech";
}