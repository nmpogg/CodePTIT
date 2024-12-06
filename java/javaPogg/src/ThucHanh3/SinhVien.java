/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

/**
 *
 * @author Admin
 */
public class SinhVien implements Comparable<SinhVien> {
    private String maSV, hoTen, lop, email, sdt;

    public SinhVien(String maSV, String hoTen, String lop, String email, String sdt) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.sdt = "0" + sdt;
    }

    @Override
    public int compareTo(SinhVien o) {
        if(!this.lop.equals(o.lop))
            return this.lop.compareTo(o.lop);
        return this.maSV.compareTo(o.maSV);
    }
    public String toString(){
        return this.maSV + " " + this.hoTen + " " + this.lop + " " + this.email + " " + this.sdt;
    }
}
