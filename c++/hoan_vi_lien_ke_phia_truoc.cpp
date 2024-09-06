#include <bits/stdc++.h>
using namespace std;
int n, X[1001], temp[1001][1001], use[1001] = {}, res = 0;
int a[1001];

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(use[a[j]] == false){ // neu a[j] chua su dung
			use[a[j]] = true; // danh dau da su dung
			X[i] = a[j]; 
			if(i == n){
				for(int h = 1; h <= n; h++){ // luu cau hinh hoan vi vao mang temp
					temp[res][h] = X[h];
				}
				res++;
			}
			else{
				Try(i+1);
			}
			use[a[j]] = false; // bo danh dau
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		std::cin >> n;
		for(int i = 1; i <= n; i++){
			std::cin >> a[i];
		}
		Try(1);
		int check = 0;
		for(int i = 0; i < res; i++){
			for(int j = 1; j <= n; j++){
				if(temp[i][j] != a[j]) continue;
				if(i != 0){
					for(int h = 1; h <= n; h++){
						cout << temp[res-1][h] << " ";
					}
					check = 1;
					break;
				}
				else{
					for(int h = 1; h <= n; h++){
						cout << temp[i-1][h] << " ";
					}
					check = 1;
					break;
				}
			}
			if(check) break;
		}
		cout << endl;
	}
	return 0;
}
