#include <bits/stdc++.h>
using namespace std;

struct people{
	string ten, ns, day, month, year;
};

void nhap(people ds[], int &n){
	for(int i = 0; i < n; i++){
		cin >> ds[i].ten;
		cin >> ds[i].ns;
		cin.ignore();
		stringstream ss(ds[i].ns);
		getline(ss, ds[i].day, '/');
		getline(ss, ds[i].month, '/');
		getline(ss, ds[i].year, '/');
	}
}

bool cmp(people a, people b){
	if(a.year < b.year) return false;
	if(a.year > b.year) return true;
	if(a.month < b.month) return false;
	if(a.month > b.month) return true;
	if(a.day > b.day) return true;
	return false;
}

void sx(people ds[], int &n){
	sort(ds, ds+n, cmp);
}

int main(){
	int n;
	cin >> n;
	people ds[n];
	nhap(ds, n);
	sx(ds, n);
	cout << ds[0].ten << endl << ds[n-1].ten;
	return 0;
}
