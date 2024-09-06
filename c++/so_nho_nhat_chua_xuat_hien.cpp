#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt[1000002] = {0};
        for(int i = 0; i < n; i++){
        	int x;
        	cin >> x;
        	if(x > 0) cnt[x] = 1;
		}
        for(int i = 1; i <= 1000001; i++) {
            if(cnt[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

