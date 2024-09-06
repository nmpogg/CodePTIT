#include <bits/stdc++.h>
using namespace std;

int sum(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == 18) return 1;
	return 0;
}

int main(){
	int cnt = 0;
	for(int i = 1e6; i < 1e7; i++){
		if(sum(i)) cnt++;
	}
	cout << cnt;
}
