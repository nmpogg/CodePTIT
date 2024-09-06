#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

class SinhVien {
private:
    std::string maSo;
    std::string hoTen;

public:
    void nhapThongTin() {
        std::cout << "Nhap ma so: ";
        std::cin >> maSo;
        std::cout << "Nhap ho ten: ";
        std::cin.ignore();
        std::getline(std::cin, hoTen);
    }

    void xemThongTin() {
        std::cout << "Ma so: " << maSo << ", Ho ten: " << hoTen << std::endl;
    }

    // Getter
    std::string getMaSo() const {
        return maSo;
    }
};

class Lop {
private:
    std::vector<SinhVien> dssv;
    std::string maLop;

public:
    void nhapThongTin() {
        std::cout << "Nhap ma lop: ";
        std::cin >> maLop;

        int soSinhVien;
        std::cout << "Nhap so sinh vien trong lop: ";
        std::cin >> soSinhVien;

        dssv.resize(soSinhVien);
        for (int i = 0; i < soSinhVien; ++i) {
            dssv[i].nhapThongTin();
        }
    }

    void xemThongTin() {
        std::cout << "Ma lop: " << maLop << std::endl;
        for (const auto& sv : dssv) {
            sv.xemThongTin();
        }
    }

    void sapXepTangDan() {
        std::sort(dssv.begin(), dssv.end(), [](const SinhVien& a, const SinhVien& b) {
            return a.getMaSo() < b.getMaSo();
        });
    }

    // Getter
    std::string getMaLop() const {
        return maLop;
    }

    const std::vector<SinhVien>& getDSSV() const {
        return dssv;
    }
};

class DiemSinhVien : public SinhVien {
private:
    float diem;
    std::string ketQua;

public:
    void nhapThongTin() {
        SinhVien::nhapThongTin(); // G?i hàm nh?p thông tin t? l?p SinhVien
        std::cout << "Nhap diem: ";
        std::cin >> diem;

        // Xét ket qua
        ketQua = (diem > 4) ? "Qua" : "Hoc Lai";
    }

    void xemThongTin() {
        SinhVien::xemThongTin(); // G?i hàm xem thông tin t? l?p SinhVien
        std::cout << "Diem: " << diem << ", Ket qua: " << ketQua << std::endl;
    }

    // Getter
    float getDiem() const {
        return diem;
    }

    std::string getKetQua() const {
        return ketQua;
    }
};

class BangDiem {
private:
    std::string maLop;
    std::string monHoc;
    int tsQua;
    int tsHocLai;
    std::vector<DiemSinhVien> dsDiem;

public:
    BangDiem(const Lop& lop) : maLop(lop.getMaLop()) {
        std::cout << "Nhap mon hoc: ";
        std::cin.ignore();
        std::getline(std::cin, monHoc);

        tsQua = 0;
        tsHocLai = 0;

        for (const auto& sv : lop.getDSSV()) {
            DiemSinhVien diemSV;
            diemSV.nhapThongTin();
            dsDiem.push_back(diemSV);

            if (diemSV.getKetQua() == "Qua") {
                tsQua++;
            } else {
                tsHocLai++;
            }
        }
    }

    void xemThongTin() {
        std::cout << "Ma lop: " << maLop << ", Mon hoc: " << monHoc << std::endl;
        for (const auto& diemSV : dsDiem) {
            diemSV.xemThongTin();
        }
        std::cout << "Tong so qua: " << tsQua << ", Tong so hoc lai: " << tsHocLai << std::endl;
    }

    void ghiTep() {
        std::ofstream file("bangdiem.txt");
        if (file.is_open()) {
            file << "Ma lop: " << maLop << ", Mon hoc: " << monHoc << std::endl;
            for (const auto& diemSV : dsDiem) {
                file << "------------------------" << std::endl;
                diemSV.xemThongTin();
            }
            file << "Tong so qua: " << tsQua << ", Tong so hoc lai: " << tsHocLai << std::endl;
            file.close();
        } else {
            std::cerr << "Khong the mo file de ghi" << std::endl;
        }
    }

    void docTep() {
        // Code ð?c t? file có th? thêm sau
    }
};

int main() {
    Lop a;
    a.nhapThongTin();
    a.sapXepTangDan();
    a.xemThongTin();

    BangDiem b(a);
    b.xemThongTin();
    b.ghiTep();

    BangDiem c;
    c.docTep();
    c.xemThongTin();

    return 0;
}

