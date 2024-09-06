#include <bits/stdc++.h>
using namespace std;

struct tg{
	int h, p, s;
};

bool cmp(tg a, tg b){
	if(a.h != b.h) return a.h < b.h;
	else if(a.p != b.p) return a.p < b.p;
	return a.s < b.s;
}

int main(){
	int n;
	cin >> n;
	tg ds[n];
	for(int i = 0; i < n; i++){
		cin >> ds[i].h >> ds[i].p >> ds[i].s;
	}
	sort(ds, ds+n, cmp);
	for(int i = 0; i < n; i++){
		cout << ds[i].h << " " << ds[i].p << " " << ds[i].s << endl;
	}
}