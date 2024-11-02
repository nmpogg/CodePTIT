/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ooppp;

import java.util.Scanner;

/**
 *
 * @author Admin
 */
class GiangVien {
    private String ma, hoten;
    private double heSoLuong;
    private String heSOKK;
    private int gio;

    public GiangVien(int ma, String hoten, double heSoLuong, String heSOKK, int gio) {
        this.ma = String.format("PM%03d", ma);
        this.hoten = hoten;
        this.heSoLuong = heSoLuong;
        this.heSOKK = heSOKK;
        this.gio = gio;
    }
    public double getHeSoKK(){
        if(this.heSOKK.equals("A")) return 1.5;
        else if(this.heSOKK.equals("B")) return 1.2;
        return 1;
    }
    public int giamLuong(){
        if(this.gio >= 500) return 0;
        else if(this.gio > 350) return 5;
        else if(this.gio > 100) return 10;
        return 15;
    }

    public String getMa() {
        return ma;
    }
    
    public int getLuong(){
        return (int) (this.heSoLuong * this.getHeSoKK() * 3000 * (100 - this.giamLuong()) / 100);
    }
}

public class bai2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        GiangVien[] ds = new GiangVien[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new GiangVien(i+1, sc.nextLine(), sc.nextDouble(), sc.next(), sc.nextInt());
        }
        String ma = sc.next();
        boolean flag = false;
        for(GiangVien x : ds){
            System.out.println(x);
            if(x.getMa().equals(ma)){
                System.out.println("xoa thanh cong");
                flag = true;
                break;
            }
        }
        if(!flag) System.out.println("khong tim thay");
    }
}
