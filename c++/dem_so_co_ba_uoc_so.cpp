#include <bits/stdc++.h>
using namespace std;

int prime[100001];

void sieve(){
	for(int i = 0; i <= 100000; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= 1000; i++)
		if (prime[i])
			for (int j = i * i; j <= 100000; j+=i)
				prime[j] = 0;
}

int main(){
	int t;
	cin >> t;
	sieve();
	while(t--){
		long long n;
		cin >> n;
		int count = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(prime[i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}
