#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve() {
    for(int i = 0; i <= 1000000; i++){
    	prime[i] = 1;
	}
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int sum(int n, int s){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == s) return 1;
	return 0;
}

int main(){
	int S, cnt = 0;
	cin >> S;
	sieve();
	vector<string> v;
	for(int i = 10000; i < 100000; i++){
		if(prime[i] && sum(i, S)){
			string s = to_string(i);
			v.push_back(s);
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}


