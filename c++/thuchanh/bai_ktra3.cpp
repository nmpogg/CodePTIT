#include <iostream>
#include <fstream>

using namespace std;

class MonHoc {
private:
    int mamon;
    string ten;
    int sotinchi;

public:
    void nhapbp() {
        cout << "Nhap ma mon: ";
        cin >> mamon;
        cout << "Nhap ten mon: ";
        cin.ignore();
        getline(cin, ten);
        cout << "Nhap so tin chi: ";
        cin >> sotinchi;
    }

    void xemmh() {
        cout << "Ma mon: " << mamon << endl;
        cout << "Ten mon: " << ten << endl;
        cout << "So tin chi: " << sotinchi << endl;
    }
};

class DanhSach {
private:
    MonHoc dsmh[100];
    int tongsomon;

public:
    void nhapbp() {
        cout << "Nhap tong so mon: ";
        cin >> tongsomon;
        for (int i = 0; i < tongsomon; i++) {
            cout << "Nhap thong tin mon hoc " << i + 1 << ":" << endl;
            dsmh[i].nhapbp();
        }
    }

    void xemmh() {
        for (int i = 0; i < tongsomon; i++) {
            cout << "Mon hoc " << i + 1 << ":" << endl;
            dsmh[i].xemmh();
        }
    }

    MonHoc timmonhoc(int mamon) {
        for (int i = 0; i < tongsomon; i++) {
            if (dsmh[i].getMamon() == mamon) {
                return dsmh[i];
            }
        }
        MonHoc notFound;
        return notFound;
    }
};

class MonHocDK : public MonHoc {
private:
    int nhom;
    int sotiet;

public:
    void nhapbp() {
        MonHoc::nhapbp();
        cout << "Nhap nhom: ";
        cin >> nhom;
        sotiet = getSoTinChi() * 15;
    }
};

class SinhVienDH {
private:
    string ma;
    string hoten;
    MonHocDK dsmdk[10];
    int tongsomon;
    int tongtinchi;

public:
    void nhapbp(DanhSach& danhSach) {
        cout << "Nhap ma sinh vien: ";
        cin >> ma;
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Nhap tong so mon dang ky: ";
        cin >> tongsomon;
        for (int i = 0; i < tongsomon; i++) {
            cout << "Nhap thong tin mon hoc " << i + 1 << ":" << endl;
            MonHocDK monhoc;
            monhoc.nhapbp();
            dsmdk[i] = monhoc;
            tongtinchi += monhoc.getSoTinChi();
        }
    }

    void xemmh() {
        cout << "Ma sinh vien: " << ma << " Ho ten: " << hoten << endl;
        cout << "Tong so mon DK: " << tongsomon << " Tong tin chi: " << tongtinchi << endl;
        cout << "Mon hoc dang ky:" << endl;
        for (int i = 0; i < tongsomon; i++) {
            dsmdk[i].xemmh();
        }
    }

    void ghitep() {
        ofstream file("sinhvien.txt");
        file << "Ma sinh vien: " << ma << " Ho ten: " << hoten << endl;
        file << "Tong so mon DK: " << tongsomon << " Tong tin chi: " << tongtinchi << endl;
        file << "Mon hoc dang ky:" << endl;
        for (int i = 0; i < tongsomon; i++) {
            file << "Mon hoc " << i + 1 << ":" << endl;
            file << "Ma mon: " << dsmdk[i].getMamon() << endl;
            file << "Ten mon: " << dsmdk[i].getTen() << endl;
            file << "So tin chi: " << dsmdk[i].getSoTinChi() << endl;
            file << "Nhom: " << dsmdk[i].getNhom() << endl;
            file << "So tiet: " << dsmdk[i].getSoTiet() << endl;
        }
        file.close();
    }

    void doctep() {
        ifstream file("sinhvien.txt");
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
};

int main() {
    DanhSach a;
    a.nhapbp();
    a.xemmh();

    SinhVienDH b;
    b.nhapbp(a);
    b.ghitep();

    SinhVienDH c;
    c.doctep();
    c.xemmh();

    return 0;
}

