#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		char x;
		cin >> x;
		if(isalpha(x)){
			if(isupper(x)) x = tolower(x);
			else x = toupper(x);
			cout << x << endl;
		}
	}
	return 0;
}
