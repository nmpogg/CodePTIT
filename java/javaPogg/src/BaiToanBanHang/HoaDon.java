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
public class HoaDon {
    private String maHD;
    private KhachHang kh;
    private MatHang mh;
    private int soLuong;

    public HoaDon(int maHD, KhachHang kh, MatHang mh, int soLuong) {
        this.maHD = String.format("HD%03d", maHD);
        this.kh = kh;
        this.mh = mh;
        this.soLuong = soLuong;
    }
    
    
    public long getThanhTien(){
        return this.mh.getGiaBan() * this.soLuong;
    }
    public String toString(){
        return this.maHD + " " + this.kh.getTenKH() + " " + this.kh.getDiaChi() + " " + this.mh.getTenMH() + " " + this.mh.getDonViTinh() + " " + this.mh.getGiaMua() + " " + this.mh.getGiaBan() + " " + this.soLuong + " " + this.getThanhTien();
    }
}
