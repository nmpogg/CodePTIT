#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int &x : a) cin >> x;
		
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(abs((x-a[i])) > abs((x-a[j]))){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
