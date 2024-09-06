#include <bits/stdc++.h>
using namespace std;

int min_a(int a[], int begin, int end, int k){
	int min = 1e9, res;
	for(int i = begin; i < end; i++){
		if(a[i] < min && a[i] > k){
			min = a[i];
			res = i;
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) a[i] = i+1;
		int check = 1;
		while(check){
			for(int i = 0; i < n; i++){
				cout << a[i];
				int count = 0;
				for(int i = 1; i < n; i++){
					if(a[i] > a[i-1]) continue;
					else{
						count++;
						if(count == n-1){
							check = 0;
							break;
						}
					}
				}
			}
			cout << " ";
			int t;
			for(int i = n-1; i >= 0; i--){
				if(a[i] > a[i-1]){
					t = i;
					break;
				}
			}
			int ok = min_a(a, t, n, a[t-1]);
			int temp = a[t-1];
			a[t-1] = a[ok];
			a[ok] = temp;
			sort(a+t, a+n);
		}
		cout << endl;
	}
	return 0;
}
