#include <iostream>

using namespace std;

int min_p(int a, int b){
	if(a > b) return b;
	return a;
} 

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << n - min_p(i, j) << " ";
		}
		cout << endl;		
	}
	return 0;
}
