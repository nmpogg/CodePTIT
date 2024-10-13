/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package HocBongSinhVien;

public class SinhVien implements Comparable<SinhVien> {
    private String name, hocbong;
    private double gpa;
    private int drl;

    public SinhVien(String name, double gpa, int drl) {
        this.name = name;
        this.gpa = gpa;
        this.drl = drl;
    }
    public void setHocBong(String s){
        this.hocbong = s;
    }

    public String getHocbong() {
        return hocbong;
    }

    public int getDrl() {
        return drl;
    }

    
    public String loaiHocBong(){
        if(this.gpa >= 3.6 && this.drl >= 90) return "XUATSAC";
        if(this.gpa >= 3.2 && this.drl >= 80) return "GIOI";
        if(this.gpa >= 2.5 && this.drl >= 70) return "KHA";
        return "KHONG";
    }
    @Override
    public String toString(){
        return this.name + ": " + this.hocbong;
    }

    @Override
    public int compareTo(SinhVien t) {
        if(this.gpa == t.drl) return t.drl - this.drl;
        else if (this.gpa > t.gpa) return -1;
        return 1;
    }
}
