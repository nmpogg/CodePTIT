#include <bits/stdc++.h>

using namespace std;

long long factorial(int n){
	if(n == 0) return 1;
	return n * factorial(n-1);
}

int main(){
	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		sum += factorial(i);
	}
	cout << sum;
	return 0;
}
