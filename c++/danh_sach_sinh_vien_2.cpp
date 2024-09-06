#include <bits/stdc++.h>
using namespace std;

int msv = 1;

struct SinhVien{
	string msv1 = "B20DCCN";
	string ten, lop, ns;
	float gpa;
};

void fix(string& s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

void chten(string& s){
	stringstream ss(s);
	string temp;
	string tmp;
	while(ss >> temp){
		fix(temp);
		tmp += temp;
		tmp += " ";
	}
	s = tmp;
}

void chns(string& s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

void nhap(SinhVien ds[], int &n){
	for(int i = 0; i < n ; i++){
		cin.ignore();
		getline(cin, ds[i].ten);
		chten(ds[i].ten);
		cin >> ds[i].lop;
		cin.ignore();
		cin >> ds[i].ns;
		cin.ignore();
		chns(ds[i].ns);
		cin >> ds[i].gpa;
	}
}

void in(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		if(msv < 10) cout << ds[i].msv1 << "00" << msv << " " << ds[i].ten << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
		if(msv > 9) cout << ds[i].msv1 << "0" << msv << " " << ds[i].ten << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
		msv++;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
