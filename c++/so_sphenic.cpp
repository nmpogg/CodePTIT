#include <bits/stdc++.h>
using namespace std;

int sphenic(int n){
	int count = 0, i = 2;
	while(n > 1){
		if(n % i == 0){
			count++;
			if(count > 3) return 0;
			int cnt = 0;
			while(n % i == 0){
				cnt++;
				if(cnt > 1) return 0;
				n /= i;
			}
		}
		else i++;
	}
	if(count == 3) return 1;
	return 0;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(sphenic(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
} 
