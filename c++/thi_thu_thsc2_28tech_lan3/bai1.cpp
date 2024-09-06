#include <bits/stdc++.h>
using namespace std;

int check(int n){
	int cuoi = n % 10;
	int res = cuoi, res2;
	n /= 10;
	while(n > 10){
		res2 = res;
		res = n % 10;
		if(abs(res - res2) != 2) return 0;
		n /= 10;
	}
	if(abs(n - res) != 2) return 0;
	if(n != cuoi) return 0;
	return 1;
}
int main(){
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	int flag = 0;
	for(int i = a; i <= b; i++){
		if(check(i)){
			flag = 1;
			cout << i << " ";
		}
	}
	if(!flag) cout << "28tech";
}