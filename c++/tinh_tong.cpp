#include <bits/stdc++.h>
using namespace std;

int main(){
	string data;
	fstream fileIn("DATA.in", ios::in);
	long long sum = 0;
	while(fileIn >> data){
		int check = 1;
		if(data.size() > 10) continue;
		for(int i = 0; i < data.size(); i++){
			if(isalpha(data[i])) check = 0;
		}
		if(!check) continue;
		int res = 0;
		for(int i = 0; i < data.size(); i++){
			res = res*10 + (data[i] - '0');
		}
		sum += res;
	}
	cout << sum;
	return 0;
}
