#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a, m;
		cin >> a >> m;
		int check = 1;
		for(int i = 0; i < m; i++){
			if((i * a) % m == 1){
				cout << i << endl;
				check = 0;
				break;
			}
		}
		if(check) cout << -1 << endl;
	}
	return 0;
}
