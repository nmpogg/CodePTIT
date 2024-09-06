#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	int count_even = 0, count_odd = 0;
	while(n > 0){
		int digit = n % 10;
		if(digit % 2 == 0) count_even++;
		else count_odd++;
		n /= 10;
	} 
	return count_even == count_odd;
}

int main(){
	int n;
	cin >> n;
	int begin = pow(10, n-1);
	int end = pow(10, n);
	int count = 0;
	for(int i = begin; i < end; i++){
		if(check(i)){
			cout << i << " ";
			count++;
		}
		if(count == 10){
			cout << endl;
			count = 0;
		}	
	}
	return 0;
}
