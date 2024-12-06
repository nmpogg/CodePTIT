/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */
import java.util.*;

class PhongBan{
     private String kiHieu, tenPhongBan;

    public PhongBan(String kiHieu, String tenPhongBan) {
        this.kiHieu = kiHieu;
        this.tenPhongBan = tenPhongBan;
    }
    public String getKiHieu(){
        return this.kiHieu;
    }
    public String getTenPhongBan(){
        return this.tenPhongBan;
    }
    public String toString(){
        return this.tenPhongBan;
    }
}

class NhanVien{
    private String maNV, hoTen;
    private int luongCoBan, soNgayCong;
    private PhongBan phongBan;

    public NhanVien(String maNV, String hoTen, int luongCoBan, int soNgayCong, PhongBan phongBan) {
        this.maNV = maNV;
        this.hoTen = hoTen;
        this.luongCoBan = luongCoBan;
        this.soNgayCong = soNgayCong;
        this.phongBan = phongBan;
    }
    public int getHeSoNhan() {
        char loaiNhanVien = maNV.charAt(0);
        int soNamCongTac = Integer.parseInt(maNV.substring(1, 3));

        if (loaiNhanVien == 'A') {
            if (soNamCongTac <= 3) return 10;
            else if (soNamCongTac <= 8) return 12;
            else if (soNamCongTac <= 15) return 14;
            else return 20;
        } else if (loaiNhanVien == 'B') {
            if (soNamCongTac <= 3) return 10;
            else if (soNamCongTac <= 8) return 11;
            else if (soNamCongTac <= 15) return 13;
            else return 16;
        } else if (loaiNhanVien == 'C') {
            if (soNamCongTac <= 3) return 9;
            else if (soNamCongTac <= 8) return 10;
            else if (soNamCongTac <= 15) return 12;
            else return 14;
        } else if (loaiNhanVien == 'D') {
            if (soNamCongTac <= 3) return 8;
            else if (soNamCongTac <= 8) return 9;
            else if (soNamCongTac <= 15) return 11;
            else return 13;
        }
        return 0;
    }

    public long tinhLuongThang() {
        return (long) luongCoBan * soNgayCong * this.getHeSoNhan() * 1000;
    }
    public String getPhongBan(){
        return this.phongBan.getKiHieu();
    }
    @Override
    public String toString(){
        return this.maNV + " " + this.hoTen + " " + this.tinhLuongThang();
    }
}

public class TinhLuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        PhongBan[] dspb = new PhongBan[n];
        HashMap<String, PhongBan> phongBan = new HashMap<>();
        for(int i = 0; i < n; i++){
            String s = sc.nextLine();
            dspb[i] = new PhongBan(s.substring(0, 2), s.substring(3));
            phongBan.put(s.substring(0, 2), dspb[i]);
        }
        int m = sc.nextInt();
        NhanVien[] dsnv = new NhanVien[m];
        for(int i = 0; i < m; i++){
            sc.nextLine();
            String maNV = sc.nextLine();
            dsnv[i] = new NhanVien(maNV, sc.nextLine(), sc.nextInt(), sc.nextInt(), phongBan.get(maNV.substring(3)));
        }
        for(NhanVien x : dsnv){
            System.out.println(x);
        }
    }
}

/*
2
HC Hanh chinh
KH Ke hoach Dau tu
2
C06HC
Tran Binh Minh
65
25
D03KH
Le Hoa Binh
59
24
*/