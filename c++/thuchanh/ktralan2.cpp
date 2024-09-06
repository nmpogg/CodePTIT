#include <bits/stdc++.h>

using namespace std;

class thoigian {
private:
    int gio, phut;

public:
    thoigian(int h = 0, int m = 0) : gio(h), phut(m) {}

    void nhapbp() {
        cout << "Nhap gio: ";
        cin >> gio;
        cout << "Nhap phut: ";
        cin >> phut;
    }

    void xemmh() {
        cout << gio << " gio " << phut << " phut";
    }

    void rutgon() {
        if (phut >= 60) {
            gio += phut / 60;
            phut %= 60;
        }
    }

    friend bool operator<(const thoigian &t1, const thoigian &t2) {
        if (t1.gio == t2.gio) {
            return t1.phut < t2.phut;
        }
        return t1.gio < t2.gio;
    }

    friend thoigian operator+(const thoigian &t1, const thoigian &t2) {
        int h = t1.gio + t2.gio;
        int m = t1.phut + t2.phut;
        thoigian sum(h, m);
        sum.rutgon();
        return sum;
    }

    friend thoigian operator-(const thoigian &t1, const thoigian &t2) {
        int h = t1.gio - t2.gio;
        int m = t1.phut - t2.phut;
        thoigian diff(h, m);
        if (diff.phut < 0) {
            diff.gio--;
            diff.phut += 60;
        }
        return diff;
    }

    friend thoigian operator*(const thoigian &t, int n) {
        int h = t.gio * n;
        int m = t.phut * n;
        thoigian result(h, m);
        result.rutgon();
        return result;
    }

    friend thoigian operator/(const thoigian &t, int n) {
        if (n == 0) {
            cerr << "Khong the chia cho 0." << endl;
            return thoigian();
        }
        int h = t.gio / n;
        int m = t.phut / n;
        thoigian result(h, m);
        return result;
    }

    operator const char *() {
        stringstream ss;
        ss << gio << " gio " << phut << " phut";
        string str = ss.str();
        char *cstr = new char[str.length() + 1];
        strcpy(cstr, str.c_str());
        return cstr;
    }
};

int main() {
    thoigian a, b(3, 20), c;
    a.nhapbp();
    a.xemmh();
    c = thoigian(2, 15);
    c.xemmh();

    cout << "\n" << static_cast<const char *>(c);
 
    if (a < b) {
        cout << "\n a < b";
    } else {
        cout << "\n a >= b";
    }

    c = a - b;
    cout << "\n a - b = ";
    c.xemmh();

    c = a + b;
    cout << "\n a + b = ";
    c.xemmh();

    c = a * 2;
    cout << "\n a * 2 = ";
    c.xemmh();

    c = a / 2;
    cout << "\n a / 2 = ";
    c.xemmh();

    return 0;
}

