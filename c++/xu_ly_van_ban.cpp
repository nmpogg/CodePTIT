#include <bits/stdc++.h>
using namespace std;

/*
ky thi LAP TRINH ICPC PTIT  bat dau to chuc     tu     nam 2010. nhu vay, nam nay la          tron 10 nam!
    vay CO PHAI NAM NAY LA KY THI LAN THU 10?        khong phai! nam nay la KY THI LAN THU 11.
*/

void fix_tu(string& a){
	a[0] = toupper(a[0]);
	for(int i = 1; i < a.size(); i++){
		a[i] = tolower(a[i]);
	}
}

int main(){
//	fstream data("C:\\Users\\Cuong\\Desktop\\New Text Document.txt", ios::in);
	vector<string> v, cau, kq;
	string tmp;
	while(getline(cin, tmp)){
		v.push_back(tmp);
	}
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v[i].size(); j++){
			if(v[i][j] == '?' || v[i][j] == '!') v[i][j] ='.';
		}
	}
	for(int i = 0; i < v.size(); i++){
		stringstream ss(v[i]);
		string temp;
		while(getline(ss, temp, '.')){
			cau.push_back(temp);
		}
	}
	for(int i = 0; i < cau.size(); i++){
		stringstream ss(cau[i]);
		string res, idx = "";
		while(ss >> res){
			idx = idx + res + " ";
		}
		idx.erase(idx.size()-1, 1);// deo hieu sao co dong nay bi RTE
		 
		fix_tu(idx);
		kq.push_back(idx);
	}
	
	for(auto it : kq) cout << it << endl;
	return 0;
}
