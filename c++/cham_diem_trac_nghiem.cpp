#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char s101[16] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
		char s102[16] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
		int check = 0, cnt = 0;
		if(n == 101){
			for(int i = 0; i < 15; i++){
				char a;
				cin >> a;
				if(a == s101[cnt]) check++;
				cnt++;
			}
		}
				
		if(n == 102){
			for(int i = 0; i < 15; i++){
				char a;
				cin >> a;
				if(a == s102[cnt]) check++;
				cnt++;
			}
		}
		cout << fixed << setprecision(2) << (float)check * 10 / 15 << endl;
	}
	return 0;
}
