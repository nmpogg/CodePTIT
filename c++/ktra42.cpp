#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SinhVien {
private:
    string maso;
    string hoten;

public:
    void nhapBP() {
        cout << "Nhap ma so: ";
        cin >> maso;
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
    }

    void xemMH() const {
        cout << "Ma so: " << maso << endl;
        cout << "Ho ten: " << hoten << endl;
    }

    const string& getMaSo() const {
        return maso;
    }
};

class Lop {
private:
    vector<SinhVien> dssv;
    string malop;

public:
    void nhapBP() {
        cout << "Nhap ma lop: ";
        cin.ignore();
        getline(cin, malop);

        int n;
        cout << "Nhap so sinh vien: ";
        cin >> n;

        dssv.resize(n);
        for (int i = 0; i < n; ++i) {
            cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
            dssv[i].nhapBP();
        }
    }

    void xemMNH() const {
        for (const auto &sv : dssv) {
            sv.xemMH();
        }
    }

    void sapXepTang() {
        sort(dssv.begin(), dssv.end(), [](const SinhVien &a, const SinhVien &b) {
            return a.getMaSo() < b.getMaSo();
        });
    }

    const vector<SinhVien>& getDSHV() const {
        return dssv;
    }

    const string& getMaLop() const {
        return malop;
    }
};

class DiemSinhVien : public SinhVien {
private:
    float diem;
    string ketqua;

public:
    DiemSinhVien() : diem(0.0), ketqua("Chua nhap diem") {}

    DiemSinhVien(const SinhVien& sv) : SinhVien(sv), diem(0.0), ketqua("Chua nhap diem") {}

    void nhapBP() {
        SinhVien::nhapBP();
        cout << "Nhap diem: ";
        cin >> diem;
        ketqua = (diem > 4.0) ? "Qua" : "Hoc lai";
    }

    void xemNH() const {
        SinhVien::xemMH();
        cout << "Diem: " << diem << endl;
        cout << "Ket qua: " << ketqua << endl;
    }

    const string& getKetQua() const {
        return ketqua;
    }
};

class BangDiem {
private:
    string malop;
    string monhoc;  // Thêm thu?c tính m? môn h?c
    int tsqua;
    int tshoclai;
    vector<DiemSinhVien> dsdiem;

public:
    BangDiem(const Lop &lop) {
        cout << "Nhap ma lop: ";
        cin.ignore();
        getline(cin, malop);  // Nh?p m? l?p

        cout << "Nhap ma mon hoc: ";
        getline(cin, monhoc);  // Nh?p m? môn h?c

        const vector<SinhVien>& dsSV = lop.getDSHV();

        dsdiem.resize(dsSV.size());
        for (size_t i = 0; i < dsSV.size(); ++i) {
            dsdiem[i] = DiemSinhVien(dsSV[i]);
        }

        tsqua = count_if(dsdiem.begin(), dsdiem.end(), [](const DiemSinhVien &sv) {
            return sv.getKetQua() == "Qua";
        });

        tshoclai = count_if(dsdiem.begin(), dsdiem.end(), [](const DiemSinhVien &sv) {
            return sv.getKetQua() == "Hoc lai";
        });
    }

    void nhapBP() {
        cout << "Nhap thong tin diem cho tung sinh vien:" << endl;
        for (auto &sv : dsdiem) {
            sv.nhapBP();
        }
    }

    void xemMH() const {
        cout << "Ma lop: " << malop << endl;
        cout << "Ma mon hoc: " << monhoc << endl;
        cout << "Tong so qua: " << tsqua << endl;
        cout << "Tong so hoc lai: " << tshoclai << endl;

        cout << "Danh sach diem sinh vien:" << endl;
        for (const auto &sv : dsdiem) {
            sv.xemNH();
        }
    }

    void ghiTep() const {
    }

    void docTep() {
    }
};

int main() {
    Lop a;
    a.nhapBP();
    a.sapXepTang();
    a.xemMNH();

    BangDiem b(a);
    b.nhapBP();
    b.ghiTep();

    BangDiem c(a);
    c.docTep();
    c.xemMH();

    return 0;
}
