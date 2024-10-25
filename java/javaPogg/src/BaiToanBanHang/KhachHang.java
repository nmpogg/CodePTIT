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
public class KhachHang {
    private String maKH, tenKH, gioiTinh, ns, diaChi;

    public KhachHang(int maKH, String tenKH, String gioiTinh, String ns, String diaChi) {
        this.maKH = String.format("KH%03d", maKH);
        this.tenKH = tenKH;
        this.gioiTinh = gioiTinh;
        this.ns = ns;
        this.diaChi = diaChi;
    }

    public String getTenKH() {
        return tenKH;
    }

    public String getDiaChi() {
        return diaChi;
    }
    public String toString(){
        return this.maKH + " " + this.tenKH + " " + this.gioiTinh + " " + this.ns + " " + this.diaChi;
    }
}
