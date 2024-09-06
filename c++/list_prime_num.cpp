#include <bits/stdc++.h>

using namespace std;

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int a, b;
	cin >> a >> b;
	if(b < a){
		int temp = a;
		a = b;
		b = temp;
	}
	for(int i = a; i < b; i++){
		if(check(i)) cout << i << " ";
	}
	return 0;
}
