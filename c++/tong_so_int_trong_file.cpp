#include <bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s.size() > 11) return 0;
	for(int i = 0; i < s.size(); i++){
		if(!isdigit(s[i])) return 0;
	}
	int res = stoi(s);
	if(res > INT_MAX) return 0;
	return true;
}

int main(){
	fstream data("C:\\Users\\Cuong\\Desktop\\DATA.txt", ios::in);
	long long sum = 0;
	string res;
	while(data >> res){
		if(check(res)){
			sum += stoi(res);
		}
	}
	cout << sum;
	return 0;
}
