#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(int n){
	int res = sqrt(n);
	if(res * res == n) return 1;
	return 0;
} 

int main() {
    int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int res1, res2;
		if(check(n)){
			res1 = res2 = sqrt(n);
		}
		else{
			res1 = sqrt(n);
			res2 = sqrt(n) +1;
		}
		while(res1 * res2 != n){
			res1++;
			res2--;
		}
		cout << min(res1, res2) << " " << max(res1, res2) << endl;
	} 
    return 0;
}
