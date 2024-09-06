#include <iostream>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int n1 = n; 
	int count = n / k;
	while(n > k){
		n -= k;
	}
	cout << n1 + count + (count + n)/k;
	return 0;
}

