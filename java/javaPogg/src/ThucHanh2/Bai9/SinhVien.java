/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2.Bai9;

/**
 *
 * @author Admin
 */
public class SinhVien {
    private String maSV, hoTen, lop, email, sdt, gioitinh;

    public SinhVien(String maSV, String hoTen, String lop, String email, String sdt, String gioitinh) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.sdt = sdt;
        this.gioitinh = gioitinh;
    }

    public String getMaSV() {
        return maSV;
    }

    public String getGioitinh() {
        return gioitinh;
    }
    
    public String toString(){
        return this.maSV + " " + this.hoTen + " " + this.lop + " " + this.email + " " + this.sdt;
    }
}
