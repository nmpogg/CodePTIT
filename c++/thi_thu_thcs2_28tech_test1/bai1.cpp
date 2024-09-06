#include <bits/stdc++.h>
using namespace std;

int prime[1000001];
int f[50];
	
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

bool find(int x){
	int sum = 0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	for(int i = 1; i < 25; i++){
		if(f[i] == sum) return true;
	}
	return false;
}

int main(){
	sieve();
	int a, b;
	cin >> a >> b;
	if(a > b) swap(a, b);
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i < 25; i++){
		f[i] = f[i-1] + f[i-2] + f[i-3];
	}
	int flag = 1;
	for(int i = a; i <= b; i++){
		if(prime[i] && find(i)){
			cout << i << " ";
			flag = 0;
		}
	}
	if(flag) cout << "28tech";
}