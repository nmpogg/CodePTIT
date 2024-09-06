// tim cua so co do dai K co nhieu den hong nhat bang cua so truot
// so den hong trong do se la so den can sua it nhat

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n] = {};
	for(int i = 0; i < b; i++){
		int x; cin >> x;
		a[x-1] = 1;
	}
	int res = 0;
	for(int i = 0; i < k; i++){
		if(a[i] == 1) res++;
	}
	int ans = res;
	for(int i = k; i < n; i++){
		res = res - a[i-k] + a[i];
		ans = min(res, ans);
	}
	cout << ans << endl;
	return 0;
}

