#include <bits/stdc++.h>
using namespace std;
#define ll long long
string chuanhoa(string s) {
	vector<string> v;
	stringstream ss(s);
	s = "";
	string word;
	while(ss >> word) {
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
		s = s + word + " ";
	}
	string res = s;
	res.erase(res.size() - 1, 1);
	return res;
}
class SinhVien{
	private:
		string msv, ten, lop, dob;
		float gpa;
		static int stt;
	public:
		float getgpa() {
			return this->gpa;
		}
		friend istream& operator >> (istream &in, SinhVien &x) { 
			++stt;
			if(stt < 10) x.msv = "B20DCCN00" + to_string(stt);
			else x.msv = "B20DCCN0" + to_string(stt);
			scanf("\n");
			getline(in, x.ten);
			x.ten = chuanhoa(x.ten);
			cin >> x.lop >> x.dob >> x.gpa; 
			if(x.dob[1] == '/') x.dob = "0" + x.dob;
			if(x.dob[4] == '/') x.dob.insert(3, "0"); 
			return in;
		}
		friend ostream& operator << (ostream &out, SinhVien x) {
			out << x.msv << " " << x.ten << " " << x.lop << " " << x.dob << " " << setprecision(2) << fixed << x.gpa << endl;
			return out;
		}
};
bool cmp1(SinhVien a, SinhVien b) {
	return a.getgpa() > b.getgpa();
}
void sapxep(SinhVien sv[], int n) {
	sort(sv, sv+n, cmp1);
}
int SinhVien::stt = 0;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
