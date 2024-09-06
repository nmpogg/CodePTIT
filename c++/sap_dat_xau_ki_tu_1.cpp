#include <bits/stdc++.h>
using namespace std;
// do chenh lech giua ki tu xuat hien nhieu nhat va phan con lai <= 1

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a[26] = {0};
		for(char x : s){
			a[x - 'a']++;
		}
		int max_val = *max_element(a, a+26);
		int conlai = s.size() - max_val;
		if(max_val - 1 <= conlai) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
