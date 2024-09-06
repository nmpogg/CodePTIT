#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
	int mnv;
	string name, sex, date, add, mst, contract;
};
int mnv;
void nhap(NhanVien& a){
	cin.ignore();
	mnv = 1;
	getline(cin, a.name);
	cin >> a.sex;
	cin.ignore();
	cin >> a.date;
	cin.ignore();
	getline(cin, a.add);
	cin >> a.mst;
	cin.ignore();
	cin >> a.contract;
}

void inds(NhanVien ds[], int n){
	for(int i = 0; i < n; i++){
		if(mnv < 10){
			cout << "0000" << mnv << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].add << " " << ds[i].mst << " " << ds[i].contract;			
		}
		else cout << "000" << mnv << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].add << " " << ds[i].mst << " " << ds[i].contract;	
		cout << endl;
		mnv++;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
