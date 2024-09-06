#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[10000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]]++;
	}
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0; i < n ; i++){
		if(b[a[i]] > 0){
			cout << a[i] << " ";
			b[a[i]] = 0;
		}
	}
	return 0;
}
