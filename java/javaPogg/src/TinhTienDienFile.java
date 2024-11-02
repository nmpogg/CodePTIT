/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
import java.util.*;
import java.io.*;

class HoaDonDien1 implements Comparable<HoaDonDien1>{
    private String maGD, hoTen, loaiGD;
    private int soDau, soCuoi;

    public HoaDonDien1(int maGD, String hoTen, String loaiGD, int soDau, int soCuoi) {
        this.maGD = String.format("KH%02d", maGD);
        this.hoTen = hoTen;
        this.loaiGD = loaiGD;
        this.soDau = soDau;
        this.soCuoi = soCuoi;
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
    public int getDinhMuc(){
        if(this.loaiGD.equals("A")) return 100;
        else if(this.loaiGD.equals("B"))return 500;
        return 200;
    }
    public int getTienTrongDinhMuc(){
        return Math.min(this.soCuoi - this.soDau, this.getDinhMuc()) * 450;
    }
    public int getTienNgoaiDinhMuc(){
        return Math.max(this.soCuoi - this.soDau - this.getDinhMuc(), 0) * 1000;
    }
    public int getVAT(){
       return this.getTienNgoaiDinhMuc() * 5 / 100;
    }
    public int getThanhTien(){
        return this.getTienTrongDinhMuc() + this.getTienNgoaiDinhMuc() + this.getVAT();
    }
    
    @Override
    public String toString(){
        return this.maGD + " " + this.formatName() + " " + this.getTienTrongDinhMuc() + " " + this.getTienNgoaiDinhMuc() + " " + this.getVAT() +  " " + this.getThanhTien();
    }

    @Override
    public int compareTo(HoaDonDien1 o) {
        return o.getThanhTien() - this.getThanhTien();
    }
}

public class TinhTienDienFile {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int n = sc.nextInt();
        HoaDonDien1[] ds = new HoaDonDien1[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] =  new HoaDonDien1(i+1, sc.nextLine(), sc.next(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(HoaDonDien1 x : ds){
            System.out.println(x);
        }
    }
}
