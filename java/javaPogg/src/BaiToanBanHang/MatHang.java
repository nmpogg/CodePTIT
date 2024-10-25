/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package BaiToanBanHang;

/**
 *
 * @author Admin
 */
public class MatHang {
    private String maMH, tenMH, donViTinh;
    private long giaMua, giaBan;

    public MatHang(int maMH, String tenMH, String donViTinh, long giaMua, long giaBan) {
        this.maMH = String.format("MH%03d", maMH);
        this.tenMH = tenMH;
        this.donViTinh = donViTinh;
        this.giaMua = giaMua;
        this.giaBan = giaBan;
    }

    public String getTenMH() {
        return tenMH;
    }

    public String getDonViTinh() {
        return donViTinh;
    }

    public long getGiaMua() {
        return giaMua;
    }

    public long getGiaBan() {
        return giaBan;
    }
    public String toString(){
        return this.maMH +  " " + this.tenMH + " " + this.donViTinh + " " + this.giaBan + " " + this.giaBan;
    }
}
