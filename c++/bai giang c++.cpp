#include <iostream>
#include <iomanip>
//thu vien all
#include <bits/stdc++.h>
using namespace std;

//bool : kieu giu lieu dung sai, true or false

int main(){
	cout << "Xin chao !\n";// dau xuong dong co the dung endl;
	return 0;
}

// muon in kieu du lieu so thap phan den n chu so float, double
float a;
cout << fixed << setprecision(n) << a; // setprecision nam trong thu vien iomanip


// kieu du lieu bool

bool ok = true;
 cout << ok; // in ra man hinh la : 1, false thi 0

int a = 100, b = 200;
bool check = a <= b; // dung nen se true = 1
cout << check; // se in ra man hinh gia tri 1 

// and &&
// or !!
// not !

// ham - funtion

bool primeNum(int n){// ham nay co do phuc tap O(Logn)
	for(int i = 2; i <= sqrt(n); i++){ // sqrt nam trong thu vien math.h
		if(n % i == 0) return false;
	}
	return n > 1;
} 

// do phuc tap cua thuat toan 
// cin, cout, gan', cong tru nhan chia : O(1)
// vong lap lap n lan co do phuc tap O(n) neu trong vong for co do phuc tap O(1)


for(int i = 0; i < n; i++){// do phuc tap O(n * Logn)
	if(primeNum(i)) cout << i << endl;
}

//co the dung for each de duyet tung phan tu trong man
int a[n];
for(int &i : a){
	cin >> i; // neu de mang a[1000] for each se doi nhap du 1000 phan tu
}
for(int x : a){
	cout << x << endl;
}


// define va typedef
#define MOD 100000009
typedef 1000000009 MOD



// vector
//cu phap : vector<kieu_du_lieu> ten_vecto;
vector<int> v; // khai bao chua biet so luong phan tu
v.push_back(10); // day phan tu 10 vao cuoi vecto
v.push_back(20); // day phan tu 20 vao cuoi vecto
v.size(); // kich thuoc cua vecto

cout << v[0];// in ra phan tu dau tien cua vecto
cout << v[v.size() - 1]; // phan tu cuoi cung cua vecto
cout << v.back(); // cung la phan tu cuoi

// mang khong cho truoc so luong phan tu
for(int i = 0; i < v.size(); i++){
	cout << v[i];
}
//hoac
for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
	cout << *it << endl;
}

//hoac duyet bang iterator
for(auto it = v.begin(); it != v.end(); ++it){
	cout << *it << endl;
}


vector<int> v(n); // khai bao vecto da co san n phan tu v[n]
for(int i = 0; i < n; i++){
	int x; cin >> x;
	v.push_back(x);
}

vector<int> a(n, 100); // khoi tao vecto co n phan tu va dau bang 100

// string
vector<string> v;
v.push_back("lap trinh");
v.push_back("asc");
for(int i = 0; i < v.size(); i++){
	cout << v[i] << endl; // moi phan tu trong vecto la 1 string
	// in ra laptrinh 
	//asc
}








// pair
// khai bao  pair<datatye1, datatype2> v;
pair <int, int> v;
pair<long long , long long> v;
pair<string, int> v;
// pair gom 2 thanh phan
v.first
v.second
// khoi tao : make_pair(a, b);
pair<int, int> v = make_pair(100, 200);// 100 gan cho first, 200 gan cho second
//hoac
pair<int, int> v = {100, 200};


// tuple
tuple<int, int, int> t = {1, 2, 3};
cout << get<0>(t) << endl;//truy cap den phan tu dau tien cua tuple laf 1
// co the khai bao bang make_tuple();








//mang cong don tren mang 1 chieu, hai chieu

int prefix[n+1] = {0}, a[i];
for(int i = 1; i <= n; i++) cin >> a[i];
for(int i = 1; i <= n; i++){
	prefix[i] = prefix[i-1] + a[i];
}
int l, r;
cin >> l >> r;
cout << prefix[r] - prefix[l-1] << endl; // tinh tong tu l den r

// tren mang 2 chieu











// xau ki tu
	string s;
	string s = "python";
	cin >> s; // nhap ko co dau cach
	cin.ignore();// xoa dau enter
	getline(cin, s); // nhap co dau cach
// co the in ra tung chu cua xau theo chi so
	int n = s.length(); // tra ve do dai cua xau s;
	int n = s.size(); // cung la do dai	
// dung vong for de xu ly tung ki tu cua string
	
//noi hai chuoi voi nhau

	string a = "python";
	string b = "java";
	string c = a + b; // c = "pythonjava"	
	a += b; // = c

// so sanh hai xau theo thu thu tu dien

	if(a > b){ // xau a lon hon xau b
		//code
	}
// hoac 
	if(a.compare(b)){
		//code
	}
	//a < b : -1
	//a == b : 0
	//a > b : 1
	
// ham cat chuoi
	string a = "abcdef";
	string b = a.substr(2, 3); // 2 la chi so ki tu bat dau cat, 3 la so ki tu cat, neu ko co so 3 thi se cat tu 2 tro di den het chuoi
	
//chuyen xau thanh so nguyen

	string a = "123456";
	int x = stoi(a);// ra so nguyen 123456
	long long x = stoll(a);// kieu long long

// chuyen so thanh string

	string s = to_string(n);// n = 123456
	
// tach tu
	string s = " abs jdsfhj akjsf ajfd akdjfzmjk";
	stringstream ss(s);
	string temp;
	while(ss >> temp){// tach khi co dau cach
		cout << temp << endl;
	}
	
	//tach khi khong phai dau cach
	while(getline(ss, temp , '.')){
		cout << temp << endl; // khi gap dau . se tach
	}
	





// cau truc du lieu set	
//do phuc tap OLog(n)
//khai bao
	set<int> s;// se duy tri theo thu tu tu be den lon
	// co the thqy int bang long long string...
//them phan tu
	s.insert(100);
	s.insert(200);
	s.insert(200);// ko duoc them vao vi set chi ko luu cac phan tu giong nhau
	s.insert(300);
	cout << s.size() << endl; // in ra so phan tu trong set la 3
// ham tim kiem : find, count
	set<int> s;
	for(int i = 0; i < 10; i++){
		s.insert(i);
	}
	
	if(s.count(5) != 0)  cout << "Found";
	else cout << "Not Found";	
// hoac
	if(s.find(5) != s.end()) cout << "Found";	

//erase : xoa phan tu khoi set

	s.erase(5); // xoa phan tu 5 ra khoi mang
	s.erase(s.find(5)); // xoa qua iterator
//co the dung for each

cout << *s.begin() << endl; // in ra phan tu dau tien cua set
cout << *s.rbegin() << endl; // in ra phan tu cuoi cung cua set
// co the dung de dem xem 1 mang co bao nhieu phan tu khac nhau
// hoac dem xem co bao nhieu cau khac nhau
//luu string se theo thu tu tu dien


// multiset se duy tri du so luong phan tu nhung se sap xep theo thu tu
multiset<int> ms;
ms.insert(100);
ms.insert(200);
ms.insert(100);
ms.insert(200);
// cac ham khac dung tuong tu set
ms.erase(100); // xoa het 100
//neu muon xoa 1 so 100 thi phai thong qua eterator


// vi du
//cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu k
//in ra phan tu lon nhat trong day con do
// 10 3
//1 2 3 1 4 5 1 8 9 10
//ouput
//3 3 4 5 5 8 9 10

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int &x : a){
		cin >> x;
	}
	multiset<int> ms;
	for(int i = 0; i < k ;i++){
		ms.insert(a[i]);
	}
	for(int i = k; i < n; i++){
		cout << *ms.rbegin() << " ";
		ms.erase(ms.find(a[i - k]));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin() << endl;
	return 0;
}

// ham unordered_set<int> s;
	unordered_set<int> s; // giong set nhung khong co thu tu
	
	
	
	
	
	
// cau truc du lieu map
// deu co do phuc tap Ologn
// ko luu gia tri giong nhau
	map<int, int> mp; // <key, value>
	mp[100] = 200; // (100, 200)
	mp[200] = 300; //(200, 300)
	mp.insert(300, 400);
	mp.insert(400, 500);
	cout << mp.size(); // in ra 4 vi co 4 phan tu
	mp[100] = 300; // thay thanh (100, 300)
// cach duyet	
	for(pair<int, int> x : mp){
		cout << x.first << " " << x.second << endl;
	}
	
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
	
	for(map<int, int> ::iterator it = mp.begin(); mp != mp.end(); it++){
		cout << (*it).first << " " << (*it).second ;
	}
	
// tim kiem 

	if(mp.count(100) != 0) cout << "Found";
	if(mp.find(100) != mp.end()) << cout << "found";
// xoa
	mp.erase(100); // 100 la key, se xoa ca cap (key, value)
	
// dem tu

	map<srting, int> mp;
	int n; // so lupng tu
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		mp[s] ++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second;
	}
// multimap cho phep luu value giong nhau, co thu tu
	multimap <int, int> mp;
	mp.insert({1, 200});
// cac ham giong map

//unodered_map giong unodered_set	
	
	
	





// tim kiem tuyen tinh  linear search
// duyet tuan tu
bool ls(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x) return true;
	}
	return false;
}

// binary search O(Logn)
// cac ptu trong mang phai duoc sap sep

bool bs(int a[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x) return true;
		// x lon hon mid thi phai tim o ben phai
		else if(a[m] < x){
			l = m + 1;
		}
		// phai tim o ben trai
		else{
			r = m - 1;
		}
	}
	return false;
}

bool binary_search(int a[], int l, int r, int x){
	if(l > r) return false;
	int m = (l + r) / 2;
	if(a[m] == x)
		return true;
	else if(a[m] < m){
		return binary_search(a, m + 1, r, x);
	}
	else return binary_search(a, l, m - 1, x);
}

// ham co san trong thu vien althgo
binary_search(a, a + n, x)
// binary_search(a + x, a + y, key) >> a[x] => a[y-1]

// voi vector
binary_search(v.begin(), v.end(), x)


// tim vi tri dau ten cua 1 phan tu x trong 1 mang da sap xep
10 3
1 2 2 3 3 3 7 8 9
int first_pos(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			// tim them o ben trai
			r = m - 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
	return res;
}

int last_pos(int a[], int n, int x){
	int res = -1, l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] == x){
			res = m;
			// tim them o ben phai
			l = m + 1;
		}
		else if(a[m] < x){
			l = m + 1;
		}
		else r = m - 1;
	}
}

// muon dem so lan xuat hien cua x thi lay last - first	
	
// lower_bound(iter1, iter2, key)  [iter1; iter2) => tra ve vi tri cua phan tu dau tien >= key
// neu tat ca cac phan tu trong mang deu nho hon key => tra ve iter2

//7 2
// 1  2 2 3 4 5 6
int main(){
	int n, x; 
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin > a[i];
	}
	auto it = lower_bound(a, a + n, x); // tim vi tri dau tien cua phan tu >= x nam trong mang a
	cout << *it << endl; // 2
	cout << it - a << endl;// in ra chi so
}

// upper_bound tra ve vi tri dau tien cua phan tu > key

	
	
	
	
	
	


// kieu du lieu ngan xep STACK
// LIFO : last in first out
//push : day phan tu vao
//pop : xoa phan tu tren cung
//top : vi tri phan tu tren cung
//size
//empty
//O(1)
//ung dung chuyen tu thap phan sang nhi phan khi in ra dao nguoc cua stack
// in cac tu trong cau theo thu tu nguoc lai

int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout << st.top() << endl; // 3
	cout << st.size() << endl; // 3
	st.pop();// xoa phan tu 3
	cout << st.top() << endl; // 2
	if(st.empty()) cout << "empty";
	
	while(!st.empty()){ // khi stack chua rong
	cout << st.top();
	st.pop();
}









//hang doi QUEUE
//FIFO
// push day 1 ptu vao cuoi hang doi
//pop xoa ptu o dau hang doi
//empty
//size
//front lay ra ptu o dau hang doi

#include <queue>

int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout << q.size(); // 4
	cout << q.front(); // 1
	q.pop(); // xoa so 1
	cout << q.front(); // 2
	q.pop();
	q.pop();
	q.pop();
	cout << q.empty(); // 1
}










// ky thuat cua so truot - slide window

// vd tim day con lien tiep cua mang co do dai k sao cho tong cac phan tu cua day con la lon nhat
/*
in
1
10 3
1 2 3 1 5 2 7 8 9 1
out
24 
7 8 9 
*/

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum = 0;
	for(int i = 0; i < k; i++) sum += a[i]; // tinh tong cac phan tu cua cua so dau tien
	int res = sum, idx = 0;// bien idx de luu vi tri dau tien cua 3 phan tu
	// truot cua so bo 1 phan tu ra them moi vao 1
	for(int i = k; i < n; i++){ // xuat phat tu k den n-1
		sum = sum - a[i - k] + a[i]; // tru di phan tu o vi tri dau tien cua cua so cu, va them moi phan tu tiep theo
		if(sum > res){
			res = sum;
			idx = i - k + 1; // chi so bat dau
		}
	}
	cout << res << endl;
	for(int i = 0; i < k; i++){
		cout << a[idx + i] << " "; 
	}
}














// ky thuat hai con tro - two pointer
// vd noi hai mang da sap xep thanh 1 mang moi da sap xep
/*
6 7
1 6 9 13 18 18
2 3 8 13 15 21 25
out
1 2 3 6 8 9 13 13 15 18 18 21 25
*/

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int& x : a) cin >> x;
	for(int& x : b) cin >> x;
	int i = 0, j = 0;
	while(i < n || j < m){
		if(a[i] <= b[j]){
			cout << a[i] << " ";
			i++;
		}
		else{
			cout << b[j] << " ";
			j++;
		}
	}
	return 0;
}

// cho hai mang da sap xep, dem xem moi phan tu o mang thu hai lon hon bao nhieu phan tu o mang thu nhat
/*
in
6 7
1 6 9 13 18 18
2 3 8 13 15 21 25
out
1 1 2 3 4 6 6 
*/

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int &x : a) cin >> x;
	for(int &x : b) cin >> x;
	int i = 0, j = 0;
	while(i < n || j < m){
		if(a[i] < b[j]){
			i++;
		}
		else{
			cout << i << " ";
			j++;
		}
	}
	return 0;
}


// tim do dai day con dai nhat co tong nho hon bang s
/*
in
7 20
2 6 4 3 6 8 9
out 
4 // 2 6 4 3  or 6 4 3 6
*/

int main(){
	int n, s;
	cin >> n >> s;
	int a[n];
	for(int &x : a) cin >> x;
	int sum = 0, ans = 0;
	int l = 0, r = 0;
	for(r = 0; r < n; r++){
		// cong don a[r]
		sum+= a[r];
		while(sum > s){
			//thay doi vi tri xuat phat cua day con
			sum -= a[l];
			l++;
		}
		// luc nay sum <= s
		ans = max(ans, l - r + 1);
	}
	cout << ans;
	return 0;
}


// tim day con co do dai ngan nhat sao cho tong lon hon ban s, neu ko co in -1

int main(){
	int n, s;
	cin >>n >> s;
	int a[n];
	for(int& x :a) cin >> x;
	int sum = 0, ans = 1e9;
	int l = 0, r = 0;
	for(r = 0; r < n; r++){
		sum += a[r];
		//neu sum >= s thi cap nhat ket qua ngay
		// sau do thu dich bien l dang ben phai, neu van thoa man thi cap nhat kq
		while(sum >= s){
			ans = min(ans, r - l + 1);
			sum -= a[l];
			l++;
		}
	}
	if(ans == 1e9) cout << -1;
	else cout << ans;
}

// tim so luong day con co tong <= s


int sum = 0, cnt = 0;
int l = 0, r = 0;
for(r = 0; r < n; r++){
	sum += a[r];
	while(sum > s){
		sum -= a[l];
		l++;
	}
	cnt += r - l + 1;
}
cout << cnt;


// tim so luong day con co tong >= s

int sum = 0, cnt = 0;
int l = 0, r;
for(r = 0; r < n; r++){
	sum += a[r];
	while(sum >= s){
		cnt += n - r;
		sum -= a[l];
		l--;
	}
}
cout << cnt;











// cap phat dong cho mang
int *a = new int[1000000000000];
//muon giai phong thi
delete []a;





	
	
//struct

#include <bits/sdtc++.h>
using namespace std;

struct ten_truct{
	//member
};

struct SinhVien{
	string msv;
	string ten;
	double gpa;
	string dc;
	// co the chua ca ham
	void in(){
		cout << msv << " " << ten < " " << fixed << setprecision(2) << gpa << " " << dc << endl;
	}
	void nhap(){
		cin >> msv;
		cin.ignore();
		getline(cin, ten);
		cin >> gpa;
		cin.ignore();
		getline(cin, dc);
	}
	
	// khoi tao gia tri mac dinh cho struct // Constructor
	SinhVien(){
		msv = "B22DCKH085";
		ten = "Ngo Minh Phong";
		gpa = 3.60;
		dc = "Thai Binh";
		// khi chua nhap gia tri cho struct thi mac dinh se la nhu tren
	}
	//constructor2
	SinhVien(string ma, string name, double diem, string diachi){
		msv = ma;
		ten = name;
		gpa = diem;
		dc = diachi;
	}
};

int main(){
	SinhVien x;
	cin >> x.msv;
	cin.ignore();
	getline(cin, x.ten);
	cin >> x.gpa;
	cin.ignore();
	getline(cin, x.dc);
	cout << x.msv << " " << x.ten < " " << fixed << setprecision(2) << x.gpa << " " << x.dc << endl;
}

int main(){
	SinhVien x{"abcd", "nguyen van nam", 2.17, "Hai duong"}; // khoi tao luon
	x.nhap();
	x.in(); // goi ham in tu struct
	// copy thong tin 2 sinh vien
	SinhVien y = x;
	SinhVien z("abcs", "sfsf", 4.00, "fdg"); // in ra constructor2
}


// nap chong cac toan tu
struct sophuc{
	int a, b; // a + bi
	//kieu_tra_ve operator (+, -, nhan, chia) (danh sach tham so){//}
	sophuc operator + (const sophuc other){
		sophuc tong;
		tong.a = a + other.a;
		tong.b = b + other.b;
		return tong;
	}
	
	// hoac
	friend sophuc operator + (const sophuc x, sophuc y){
		sophuc tong;
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong;
	}
	
	//insertion : >>
	friend istream& operator >> (istream& in, sophuc &x){
		in >> x.a >> x.b;
		return in;
	}
	
	//extration <<
	friend ostream& operator << (ostream& out, sophuc x){
		out << x.a << " " << x.b;
		return out;
	}
	
	// kiemtra tinh bang nhau
	bool operator == (const sophuc other){
		return a == other.a && b == other.b;
	}
	
	// hoac
	friend bool operator == (const sophuc x, sophuc y){
		return x.a == y.a && x.b == y.b;
	}
	friend bool operator < (const sophuc x, sophuc y){
		return (x.a * x.a + x.b * x.b < y.a * y.a + y.b * y.b);
	}
};

// sap xep danh sach sinh vien theo gpa

struct sv{
	string msv, ten;
	double gpa;
	
	bool operator < (const sv other){
		return gpa < other.gpa;
	}
};

int main(){
	int n;
	cin >> n;
	sv ds[i];
	for(int i = 0; i < n; i++){
		cin >> ds[i].msv
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].gpa;
	}
	sort(ds, ds + n);
	for(sv x : ds){
		cout << x.msv << " " << x.ten << " " << x.gpa << edl;
	}
}

//struct long nhau
struct time{
	int gio, phut, giay;
};

struct ve{
	string ten;
	time tg;
};

int main(){
	ve a;
	getline(cin, a.ten);
	cin >> a.time.gio >> a.time.phut >> a.time.giay;
}












//OOP lap trinh huong doi tuong

// class
// gom thuoc tinh va phuong thuc
// object ; doi tuong
// constructor : ham khoi tao
//destructor : ham huy

//Tinh chat
//Encapsulation : dong goi
/*
Access modifier :
private
public
protected

*/
class TenClass{
	// thuoc tinh va phuong thuc	
};

class SinhVien{
	private:
		string id, ten ,tuoi, ns;// thuoc tinh
		double gpa;
	public:
		// cac phuong thuc  
		SinhVien(); // constructor1 
		SinhVien(string, string, string, double); // constructor2
		void xinchao();// phuong thuc
		void dihoc();
		~SinhVien(); // ham huy 
		void nhap();
		void in();
		
		//getter
		double getGpa();
		
		//setter
		void setGpa(double);
};

//Implementation

SinhVien::SinhVien(){
	cout << "Ham khoi tao duoc goi !"; // chi chay neu chua khai bao constructor2
}

SinhVien::SinhVien(string ma, string name, string birth, double diem){
	cout << "Ham khoi tao co tham so duoc goi";
	id = ma;
	ten = name;
	ns = birth;
	gpa = diem;
}

void SinhVien::xinchao(){
	cout << "Hello ! \n";
}

void SinhVien::dihoc(){
	cout << "Di hoc";
}

void SinhVinen::nhap(){
	cin >> id;
	cin.ignore();
	getline(cin, ten);
	cin >> ns;
	cin >> gpa;
}

void SinhVien::in(){
	cout << id << ten << ns << gpa;
}



int main(){
	SinhVien x; // neu xay dung constructor nhu tren thi se in ra nhu trong ham
	x.dihoc();
	x.xinchao();
	cout << x.id << endl; // ko the truy cap vi thuoc tinh id nam trong private
	
	
	x.nhap();
	x.in();
	
	
	return 0;
}

//this co the them this-> truoc ten cac thuoc tinh trong cac phuong thuc de phan biet
SinhVien::SinhVien(string id, string ten, string ns, string ns, double gpa){
	this->id = id;
	this->ten = ten;
	this->ns = ns;
	this->gpa = gpa;
}



// sap xep danh sach
double SinhVien::getGPa(){
	return gpa;
// or return this->gpa;
	
}

bool cmp(SinhVien a, SinhVien b){
	return a.getGpa() > b.getGpa(); // sang xep giam dan
}

//setter
void SinhVien::setGpa(double gpa){
	this->gpa = gpa;
}

int main(){
	SinhVien x;
	x.setGpa(2.18); // gan gpa = 2.18
}


// static

class SinhVien{
	private:
		string id, ten, ns;
		double gpa;
		static int dem;
	public:
		void tangDem();
		int getDem();
};

int SinhVien::dem = 0;

void SinhVien::tangDem(){
	++dem;
}

int SinhVien:getDem(){
	return dem;
}

int main(){
	SinhVien x;
	x.tangDem();// dem = 2
	x.tangDem(); // dem = 2
	SinhVien y;
	cout << y.getDem(); // cung bang 2 vi ca class se chung bien dem
	y.tangDem();
	SinhVien z;
	cout << z.getDem(); // bang 3
}


//
void SinhVinen::nhap(){
	dem++; // dem = 1
	this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
	getline(cin, ten);
	cin >> ns;
	cin >> gpa;
	cin.ignore();
}

int main(){
	SinhVien x;
	x.nhap(); // msv = 001
	x.in();
	SinhVien y;
	y.nhap(); // msv = 002
	y.in();
}


// friend function, friend class


class SinhVien{
	private:
		string id, ten, ns;
		double gpa;
		static int dem;
	public:
		void nhap();
		void in();
		friend void inthongtin(SinhVien);// khai bao ham inthongtin la ham ban
		friend void chuanhoa(SinhVien&);
};		

void inthongtin(SinhVien a){ // thi moi co the dung nhu the nay
	cout << a.id << a.ten;
}

void chuanhoa(SinhVien& a){
	string res = "";
	stringstream ss(a.ten);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	a.ten = res;
}

int main(){
	SinhVien x;
	x.nhap();
	chuanhoa(x);
	x.in();
}


// lop ban
class Giao Vien;
class SinhVien;


class GiaoVien{
	private:
		string khoa;
	public:
		void update(SinhVien&); // co the truy cap vao cac thuoc tinh private cua SinhVien
};

class SinhVien{
	friend class GiaoVien;
		private:
		string id, ten, ns;
		double gpa;
	public:
		void nhap();
		void in();
		friend void inthongtin(SinhVien);// khai bao ham inthongtin la ham ban
		friend void chuanhoa(SinhVien&);
};	


void GiaoVien::update(SinhVien& a){
	a.gpa = 3.20;
}

int main(){
	SinhVien x;
	x.nhap();
	GiaoVien y;
	y.update(x); // thong tin cua Sinh vien bi thay doi
	x.in();
}





// toan tu nhap xuat >> << operator overloading

class SinhVien{
	private:
		string id, ten, ns;
		double gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien& a);	
		friend ostream& operator << (ostream &out, SinhVien a);
		friend bool operator < (SinhVien a, SinhVien b);	
};	

istream& operator >> (istream &in, SinhVien& a){
	in >> a.id;
	getline(in, a.ten);
	in >> a.ns >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.id << "" << a.ten << " " << a.ns << " " << a.gpa << endl; 
	return out;
}

bool operator < (SinhVien a, SinhVien b){
	return a.gpa < b.gpa;
}


int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n); // sap xep dua vao operator <
}




// tinh ke thua
// su dung lai code tranh du thua cua cac class co thuoc tinh giong nhau

//base class : CLASS CHA
//derived class : class con se co tat ca cac thuoc tinh cua class con
//function overriding :  ghi de ham
// ham tao cua lop con goi ham tao cua lop cha
// cac ham cua lop con goi ham cua lop cha ( them toan tu pham vi ::)
class Person{
	private:
		string name;
		string address;
	public:
		string getName(){
			return name;
		}
		string getAdd{
			return address;
		}
		void setName(string name){
			this->name = name;
		}
		void setAdd(string add){
			this->address = add;
		}
};


class Student : public Person{
	private:
		float gpa; 
	public:
		float getGpa(){
			return gpa;
		}
		void setGpa(float gpa){
			this->gpa = gpa;
		}
};

class GiaoVien : public Person{
	private:
		double salary;
	public:
};

int main(){
	Student s; // co moi thuoc tinh cua class Person
	s.setName("Ngo Minh Phong");
	s.setAdd("Thai Binh");
	s.getGpa(3.6);
	
}


// ghi de ham

class Person{
	private:
		string name;
		string address;
	public:
		string getName(){
			return name;
		}
		string getAdd{
			return address;
		}
		void setName(string name){
			this->name = name;
		}
		void setAdd(string add){
			this->address = add;
		}
		void nhap(){
			getline(cin, name);
			getline(cin, address);
		}
		void in(){
			cout << name << " " << address << " ";
		}
		// constructor lop cha
		Person(string name, string address){
			this->name = name;
			this->address = address;
		}
};

class Student : public Person{
	private:
		float gpa; 
	public:
		float getGpa(){
			return gpa;
		}
		void setGpa(float gpa){
			this->gpa = gpa;
		}
		// function overriding : ghi de
		void nhap(){
			Person::nhap();
			cin >> gpa;
		}
		void in(){
			cout << name << " " << address << " " << gpa;
			// khong the in ra duoc vi mac du class Student la con cua class Person nhung no khong the truy cap vao name va address cua class Person
			cout << getName() << " " << getAdd() << " " << gpa;// day moi la hop le
			// hoac
			Person::in();
			cout << gpa;
		}
		// constructor
		// muon khoi tao constructor moi thi phai thong qua constructor cua lop cha
		Student(string name, string address, float gpa) : Person(name, address){
			this->gpa = gpa;
		}
};

int main(){
	Student s; 
	s.nhap(); // neu ham nhap chua dinh nghia trong class con thif mac dinh se goi trong class cha
	s.in();
}

// access mode

// khi lop con duoc ke thua voi mode public : giu tat ca cac tinh chat cua lop cha

// private : lop cha se tro thanh private cua lop con  

//protected : tat ca thanh phan public cua lop cha se thanh protected cua lop con



// ham tao va ham huy

class A{
	public:
		A(){
			cout << "constructor cua lop A";
		}
};

class B : public A{
	public:
		B(){
			cout << "constructor cua lop B";
		}
};


int main(){
	B obj; // khoi tao A truoc moi khoi tao B nen khi in ra se in ra A() truoc roi B()
}



// ke thua nhieu muc: C ke thua B, B ke thua A, ...

// ke thua nhieu class

class Bay{
	public:
		Bay(){
			cout << "Biet Bay";
		}
};

class CoVu{
	public:
		CoVu(){
			cout << " Co Vu";
		}
};

class ConDoi : public Bay, public CoVu{ // co tat ca thuoc tinh vaf phuong thuc cua hai lop cha
};

int main(){
	ConDoi Bat; // Biet Bay Co Vu
}





















