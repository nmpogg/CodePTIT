#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); // insert
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		set<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}	
		for(int i = 0; i < n; i++){
			bool check = false;
			for(auto x : se){
				if(x > a[i]){
					cout << x << " ";
					check = true;
					break;
				}
			}
			if(!check) cout << "_ ";
		}
		cout << endl;
	}
	return 0;
} 
