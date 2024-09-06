#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			a[i] *= a[i];
		}
		int check = 0;
		for(int i = 0; i < n-1; i++){
			for(int j = i+1 ; j < n; j++){
				long long x = a[i] + a[j];
				if(sqrt(x) == (int)sqrt(x)){
					for(int k = 0; k < n; k++){
						if(a[k] == x){
							check = 1;
							break;
						}						
					}
					break;					
				}
			}
			if(check) break;
		}
		if(check) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;	
}
