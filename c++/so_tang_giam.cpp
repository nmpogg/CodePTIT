#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

bool tang(int n){
	int digit = n % 10;
	n /= 10;
	while(n > 0){
		int num = digit;
		digit = n % 10;
		if(num <= digit) return false;
		n /= 10;
	}
	return true;
}

bool giam(int n){
	int digit = n % 10;
	n /= 10;
	while(n > 0){
		int num = digit;
		digit = n % 10;
		if(num >= digit) return false;
		n /= 10;
	}
	return true;
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0, begin = pow(10, n-1), end = pow(10, n);
		for(int i = begin; i < end; i++){
			if((tang(i) || giam(i)) && prime(i)) count++;
		}
		cout << count << endl;
	}
	return 0;
}
