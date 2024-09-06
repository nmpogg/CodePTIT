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
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[i] = a[i];
		}
		sort(a, a+n);
		int check = 1, cnt = 0, kq[10000][10000];
		while(check){
			for(int i = 0; i < n; i++){
				kq[cnt][i] = a[i];
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
			cnt++;
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
		int idx;
		for(int i = 0;  i < cnt; i++){
			for(int j = 0; j < n; j++){
				if(kq[i][j] != b[j]) continue;
				idx = i;
			}
		}
		for(int i = 0; i < n; i++){
			cout << kq[idx-1][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
