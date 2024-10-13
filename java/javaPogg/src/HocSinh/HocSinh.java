/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package HocSinh;


public class HocSinh implements Comparable<HocSinh> {
    private String maHS, hoTen;
    private double dtb;
    
    public HocSinh(int maHS, String hoTen, double dtb){
        this.maHS = String.format("HS%02d", maHS);
        this.hoTen = hoTen;
        this.dtb = dtb;
    }
    public String getHocLuc(){
        if(this.dtb < 5) return "Yeu";
        else if(this.dtb < 7) return "Trung Binh";
        else if(this.dtb < 9) return "Kha";
        return "Gioi";
    }

    public double getDtb() {
        return dtb;
    }
    
    @Override
    public String toString(){
        return this.maHS + " " + this.hoTen + " " + this.dtb + " " + this.getHocLuc();
    }

    @Override
    public int compareTo(HocSinh t) {
        if(this.dtb > t.dtb) return -1;
        return 1;
    }
}
