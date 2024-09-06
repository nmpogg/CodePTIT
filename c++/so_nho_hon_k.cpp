// dem so phan tu nho hon k : d
// tim do dai cua so(l) chua nhieu so nho hon bang k nhat : ans
// so lan doi cho se la: d - ans
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], d = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] <= k) d++; // dem so phan tu nho hon k va no la cua so lon nhat can truot
		}
		int cnt = 0;
		// xet cua so dau tien
		for(int i = 0; i < d; i++){
			if(a[i] <= k) cnt++;
		}
		int ans = cnt;
		// tim cua so co do dai bang d chua nhieu so nho hon k nhat
		for(int i = d; i < n; i++){
			if(a[i - d] <= k) cnt--; // phan tu vua bi truot ra nho hon k thi phai giam bien cnt
			if(a[i] <= k) cnt++; // phan tu tiep theo truot vao thi cong bien dem
			ans = max(ans, cnt); // ans la so phan tu nam trong cua so chua nhieu phan tu nho hon bang k nhat
		}
		cout << d - ans << endl;
	}
	return 0;
}
