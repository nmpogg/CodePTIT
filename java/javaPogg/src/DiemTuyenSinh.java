/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */
import java.util.*;
import java.io.*;

class ThiSinh implements Comparable<ThiSinh>{
    private String maTS, hoTen, danToc;
    private double diem;
    private String khuVuc;
    public ThiSinh(int maTS, String hoTen, double diem, String danToc, String khuVuc) {
        this.maTS = String.format("TS%02d", maTS);
        this.hoTen = hoTen;
        this.danToc = danToc;
        this.diem = diem;
        this.khuVuc = khuVuc;
    }
    public String formatName(){
        String ans = "";
        String[] a = this.hoTen.trim().split("\\s+");
        for(String x : a){
            ans += Character.toUpperCase(x.charAt(0));
            for(int j = 1; j < x.length(); j++){
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }
    public double getDiemUuTienKhuVuc(){
        if(this.khuVuc.equals("1")) return 1.5;
        else if(this.khuVuc.equals("2")) return 1;
        return 0;
    }
    public double getDiemUuTienDanToc(){
        if(this.danToc.equals("Kinh")) return 0;
        return 1.5;
    }
    public String getTongDiem(){
        return String.format("%.1f", this.diem + this.getDiemUuTienKhuVuc() + this.getDiemUuTienDanToc());
    }
    public String getTrangThai(){
        if(Double.parseDouble(this.getTongDiem()) >= 20.5) return "Do";
        return "Truot";
    }
    @Override
    public int compareTo(ThiSinh o) {
        double d1 = Double.parseDouble(this.getTongDiem());
        double d2 = Double.parseDouble(o.getTongDiem());
        if(d1 == d2){
            return this.maTS.compareTo(o.maTS);
        }
        else if(d1 > d2) return -1;
        return 1;
    }
    @Override
    public String toString(){
        return this.maTS + " " + this.formatName() + " " + this.getTongDiem() + " " + this.getTrangThai();
    }
}

public class DiemTuyenSinh {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("THISINH.in"));
        int n = sc.nextInt();
        ThiSinh[] ds = new ThiSinh[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new ThiSinh(i+1, sc.nextLine(), sc.nextDouble(), sc.next(), sc.next());
        }
        Arrays.sort(ds);
        for(ThiSinh x : ds){
            System.out.println(x);
        }
    }
}
/*
2
Nguyen  hong ngat
22
Kinh
1
  Chu thi MINh
14
Dao
3
*/