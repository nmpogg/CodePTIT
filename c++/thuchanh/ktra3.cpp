#include <iostream>
#include <fstream>

using namespace std;

class monhoc {

public:
    int mamon;
    string ten;
    int sotinchi;

    void nhapbp() {
        cout << "Nhap Ma mon: ";
        cin >> mamon;
        cout << "Nhap Ten mon: ";
        cin >> ten;
        cout << "Nhap So tin chi: ";
        cin >> sotinchi;
    }

    void xemmh() {
        cout << "Ma mon: " << mamon << endl;
        cout << "Ten mon: " << ten << endl;
        cout << "So tin chi: " << sotinchi << endl;
    }
    int getMamon(){
    	return mamon;
	}
	int getSotinchi(){
		return sotinchi;
	}
};

class danhsach {
private:
    monhoc dsmh[100];
    int tongsomon;

public:
    void nhapbp() {
        cout << "Nhap tong so mon hoc: ";
        cin >> tongsomon;
        for (int i = 0; i < tongsomon; i++) {
            cout << "Nhap thong tin mon hoc thu " << i + 1 << ":" << endl;
            dsmh[i].nhapbp();
        }
    }

    void xemmh() {
        for (int i = 0; i < tongsomon; i++) {
            cout << "Mon hoc thu " << i + 1 << ":" << endl;
            dsmh[i].xemmh();
        }
    }

    monhoc timmonhoc(int mamon) {
        for (int i = 0; i < tongsomon; i++) {
            if (dsmh[i].getMamon() == mamon) {
                return dsmh[i];
            }
        }
        return monhoc();
    }
};

class monhocdk : public monhoc {
private:
    int nhom;
    int sotiet;

public:
    void nhapbp() {
        monhoc::nhapbp();
        cout << "Nhap nhom: ";
        cin >> nhom;
        sotiet = sotinchi * 15;
    }

    void xemmh() {
        monhoc::xemmh();
        cout << "Nhom: " << nhom << endl;
        cout << "So tiet: " << sotiet << endl;
    }
};

class sinhviendk {
private:
    string mass;
    string hoten;
    monhocdk dsmdk[10];
    int tongsondk;
    int tongtinchi;

public:
    void nhapbp(danhsach &ds) {
        cout << "Nhap Ma sinh vien: ";
        cin >> mass;
        cout << "Nhap Ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Nhap tong so mon hoc dang ky: ";
        cin >> tongsondk;
        for (int i = 0; i < tongsondk; i++) {
            cout << "Nhap Ma mon hoc thu " << i + 1 << ": ";
            int mamon;
            cin >> mamon;
            monhoc mon = ds.timmonhoc(mamon);
            if (mon.getMamon() != -1) {
                dsmdk[i] = monhocdk(mon);
                dsmdk[i].nhapbp();
                tongtinchi += mon.getSotinchi();
            } else {
                cout << "Khong tim thay mon hoc co Ma mon " << mamon << endl;
                dsmdk[i] = monhocdk();
            }
        }
    }

    void xemmh() {
        cout << "Ma sinh vien: " << mass << endl;
        cout << "Ho ten: " << hoten << endl;
        cout << "Tong so mon DK: " << tongsondk << endl;
        for (int i = 0; i < tongsondk; i++) {
            cout << "Mon hoc thu " << i + 1 << ":" << endl;
            dsmdk[i].xemmh();
        }
        cout << "Tong tin chi: " << tongtinchi << endl;
    }

    void ghitep() {
        ofstream file(mass + ".txt");
        if (file.is_open()) {
            file << "Ma sinh vien: " << mass << endl;
            file << "Ho ten: " << hoten << endl;
            file << "Tong so mon DK: " << tongsondk << endl;
            for (int i = 0; i < tongsondk; i++) {
                file << "Mon hoc thu " << i + 1 << ":" << endl;
                file << "Ma mon: " << dsmdk[i].getMamon() << endl;
                file << "Ten mon: " << dsmdk[i].getTen() << endl;
                file << "Tong tin chi: " << dsmdk[i].getSotinchi() << endl;
                file << "Nhom: " << dsmdk[i].getNhom() << endl;
                file << "So tiet: " << dsmdk[i].getSotiet() << endl;
            }
            file << "Tong tin chi: " << tongtinchi << endl;
            file.close();
            cout << "Ghi file thanh cong!" << endl;
        } else {
            cout << "Khong the ghi file!" << endl;
        }
    }
};

class sinhviendh : public sinhviendk {
public:
    void doctep() {
        cout << "Nhap Ma sinh vien can doc thong tin: ";
        string mass;
        cin >> mass;
        ifstream file(mass + ".txt");
        if (file.is_open()) {
            file >> mass;
            file >> hoten;
            file >> tongsondk;
            for (int i = 0; i < tongsondk; i++) {
                file >> dsmdk[i];
                tongtinchi += dsmdk[i].getSotinchi();
            }
            file.close();
            cout << "Doc file thanh cong!" << endl;
        } else {
            cout << "Khong the doc file!" << endl;
        }
    }
};

int main() {
    danhsach a;
    a.nhapbp();
    a.xemmh();

    sinhviendk b;
    b.nhapbp(a);
    b.ghitep();

    sinhviendk c;
    c.doctep();
    c.xemmh();

    return 0;
}

