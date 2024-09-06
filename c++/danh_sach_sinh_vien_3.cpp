#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv = "B20DCCN0";
	string ten, date, lop;
	double gpa;
	bool operator > (const SinhVien other){
		return gpa > other.gpa;
	}
	void fix_name(string& s){
		s[0] = toupper(s[0]);
		for(int i = 1; i < s.size(); i++){
			s[i] = tolower(s[i]);
		}
	}
	
	void fix_date(string& s){
		if(s[1] == '/') s = "0" + s;
		if(s[4] == '/') s.insert(3, "0");
	}	
	
	void chuanhoa(string& s){
		stringstream ss(s);
		string temp, tmp;
		while(ss >> temp){
			fix_name(temp);
			tmp += temp;
			tmp += " ";
		}
		s = tmp;
	}
};

bool ss(SinhVien a, SinhVien b){
	return a > b;
}


void nhap(SinhVien ds[], int& n){
	for(int i = 0; i < n; i++){
		string str = to_string(i+1);
		if(i+1 < 10){
			ds[i].msv = ds[i].msv + "0" + str;
		}
		else{
			ds[i].msv = ds[i].msv + str;
		}
		cin.ignore();
		getline(cin, ds[i].ten);
		ds[i].chuanhoa(ds[i].ten);
		getline(cin, ds[i].lop);
		getline(cin, ds[i].date);
		ds[i].fix_date(ds[i].date);
		cin >> ds[i].gpa;
	}
}

void sapxep(SinhVien ds[], int& n){
	sort(ds, ds+n, ss);
}

void in(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].date << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
/*
2
ngUYen Van NaM
D20DCCN01-B
2/12/1994
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/1994
3.0
*/

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
