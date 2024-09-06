#include <bits/stdc++.h>
using namespace std;

class thoigian {
private:
    int gio;
    int phut;
public:
    // Ham khoi tao 2 tham so
    thoigian(int gio, int phut) : gio(gio), phut(phut) {}

    // Ham nhap tu ban phim
    void nhapbp() {
        cout << "Nhap gio: ";
        cin >> gio;
        cout << "Nhap phut: ";
        cin >> phut;
    }

    // Ham rut gon thoi gian ve dinh dang chuan
    void rutgon() {
        if(phut>=60){
        	phut -=60;
        	gio +=1;
		}
		else if(gio>0 &&phut<0){
			gio -=1;
			phut = 60+phut;
		}
		else if(gio<0 && phut<0){
			gio = gio;
			phut = 0-phut;
		}
    }

    // Ham xem thoi gian tren man hinh
    void xemmh() {
        cout << gio << " gio " << phut << " phut" << endl;
    }

    // Ham doi kieu tu char* sang thoigian
    static thoigian charToThoigian(const char* str) {
        int gio, phut;
        sscanf(str, "%d gio %d phut", &gio, &phut);
        return thoigian(gio, phut);
    }

    // Ham doi kieu thoigian sang char*
    const char* thoigianToChar() {
        char* str = new char[50];
        sprintf(str, "%d gio %d phut", gio, phut);
        return str;
    }

    // Toan tu so sanh <
    friend bool operator<(const thoigian& lhs, const thoigian& rhs) {
        return (lhs.gio * 60 + lhs.phut) < (rhs.gio * 60 + rhs.phut);
    }

    // Toan tu cong +,
    thoigian operator+(const thoigian& other) {
        thoigian result(gio + other.gio, phut + other.phut);
        result.rutgon();
        return result;
    }

    // Toan tu tru -
    thoigian operator-(const thoigian& other) {
        thoigian result(gio - other.gio, phut - other.phut);
        result.rutgon();
        return result;
    }

    // Toan tu nhan *
    friend thoigian operator*(const thoigian& t, int n) {
        thoigian result(t.gio * n, t.phut * n);
        result.rutgon();
        return result;
    }

    // Toan tu chia /
    friend thoigian operator/(const thoigian& t, int n) {
        thoigian result(t.gio / n, t.phut / n);
        result.rutgon();
        return result;
    }
};

int main() {
    thoigian a(0, 0), b(3, 20), c(0, 0);
    a.nhapbp();
    a.xemmh();

    c = thoigian::charToThoigian("2 gio 15 phut"); c.xemmh();
    cout << "\n" << c.thoigianToChar();

    if (a < b)cout << "\na < b";
    else cout << "\na >= b";

    c = a - b; cout << "\na - b = "; c.xemmh();
	c = a + b; cout << "\na + b = "; c.xemmh();
	c = a * 2; c.xemmh();
	c = a / 2; c.xemmh();

}