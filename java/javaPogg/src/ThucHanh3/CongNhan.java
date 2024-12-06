/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

import java.time.format.DateTimeFormatter;

/**
 *
 * @author Admin
 */
public class CongNhan implements Comparable<CongNhan> {
    private String maCN, hoTen;
    private String vao, ra;

    public CongNhan(String maCN, String hoTen, String vao, String ra) {
        this.maCN = maCN;
        this.hoTen = hoTen;
        this.vao = vao;
        this.ra = ra;
    }
    public int getTimeLamViec(){
        String[] in = this.vao.split(":");
        String[] out = this.ra.split(":");
        int res1 = Integer.parseInt(in[0]) * 60 + Integer.parseInt(in[1]);
        int res2 = Integer.parseInt(out[0]) * 60 + Integer.parseInt(out[1]);
        return res2 - res1 - 60;
    }
    public String getKetQua(){
        if(this.getTimeLamViec() >= 480) return "DU";
        return "THIEU";
        
        
    }

    @Override
    public int compareTo(CongNhan o) {
        if(this.getTimeLamViec() == o.getTimeLamViec()){
            return this.maCN.compareTo(o.maCN);
        }
        return -this.getTimeLamViec() + o.getTimeLamViec();
    }
    public String toString(){
        return this.maCN + " " + this.hoTen + " " + this.getTimeLamViec() / 60 + " gio " + this.getTimeLamViec() % 60 + " phut " + this.getKetQua();
    }
}
