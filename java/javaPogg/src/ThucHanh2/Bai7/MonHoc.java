/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2.Bai7;

/**
 *
 * @author Admin
 */
public class MonHoc implements Comparable<MonHoc> {
    private String maMH, tenMH, hinhThucThi;

    public MonHoc(String maMH, String tenMH, String hinhThucThi) {
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.hinhThucThi = hinhThucThi;
    }

    public String getMaMH() {
        return maMH;
    }
    
    public String toString(){
        return this.maMH + " " + this.tenMH + " " + this.hinhThucThi;
    }

    @Override
    public int compareTo(MonHoc o) {
        return this.maMH.compareTo(o.maMH);
    }
}
