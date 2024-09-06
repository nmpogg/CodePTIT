#include <bits/stdc++.h>
#define pb push_back
using namespace std;

struct tt{
	int stt;
	string name, luong;
};
void cnang_1 (vector<tt> &a, int n) {
	int k;
	cin >> k;
	for (int i = 0; i < k; i ++) {
		int idx;
		string s, s1;
		cin >> idx;
		cin.ignore();
		getline(cin, s);
		cin >> s1;
		a.pb({idx, s, s1});
	}
	cout << k << endl;
}
void cnang_2 (vector<tt> &a, int n) {
	cin.ignore();
	string s;
	getline(cin, s);
	int len = a.size(), kt = 0;
	for (int i = 0 ; i < len; i ++) {
		if (s == a[i].name) {
			cout << a[i].stt << " " << a[i].name << " " << a[i].luong << endl;
			kt = 1;
			break;
		}
	}
	if (!kt) cout << "-1\n";
}
void cnang_3(vector<tt> &a, int n) {
	a.pop_back();
	int len = a.size();
	for (int i = 0; i < len; i ++) {
		cout << a[i].stt << " " << a[i].name << " " << a[i].luong << endl;
	}
}
int main(){
	vector<tt> a;
	for (int n; cin >> n;) {
		if (n == 1) cnang_1(a, n);
		else if (n == 2) cnang_2(a, n);
		else {
			cnang_3(a, n);
			break;
		}
	}
}
