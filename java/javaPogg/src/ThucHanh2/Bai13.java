/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2;

/**
 *
 * @author Admin
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.*;
import java.io.*;

class SinhVienTT{
    private String id, name, phone, email;

    public SinhVienTT(String id, String name, String phone, String email) {
        this.id = id;
        this.name = name;
        this.phone = phone;
        this.email = email;
    }

    public String getId() {
        return id;
    }

    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.email + " " + this.phone;
    }
}

class DeTai{
    private String maDT, tenGV, tenDT;

    public DeTai(int maDT, String tenGV, String tenDT) {
        this.maDT = String.format("DT%03d", maDT);
        this.tenGV = tenGV;
        this.tenDT = tenDT;
    } 
    public String getMaDT(){
        return this.maDT;
    }
    @Override
    public String toString(){
        return this.tenGV + " " + this.tenDT;
    }
}

class HoiDong implements Comparable<HoiDong>{
    private SinhVienTT sv;
    private DeTai detai;
    private String maHD;

    public HoiDong(SinhVienTT sv, DeTai detai, String maHD) {
        this.sv = sv;
        this.detai = detai;
        this.maHD = maHD;
    }

    public String getMaHD() {
        return maHD;
    }
    
    @Override
    public String toString(){
        return this.sv + " " + this.detai;
    }

    @Override
    public int compareTo(HoiDong o) {
        return this.maHD.compareTo(o.maHD);
    }
}

public class Bai13 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("SINHVIEN.in"));
        int n = sc1.nextInt();
        sc1.nextLine();
        SinhVienTT[] dssv = new SinhVienTT[n];
        HashMap<String, SinhVienTT> sv = new HashMap<>();
        for(int i = 0; i < n; i++){
            String id = sc1.nextLine();
            dssv[i] = new SinhVienTT(id, sc1.nextLine(), sc1.nextLine(), sc1.nextLine());
            sv.put(id, dssv[i]);
        }
        Scanner sc2 = new Scanner(new File("DETAI.in"));
        int m = sc2.nextInt();
        sc2.nextLine();
        DeTai[] dsdt = new DeTai[m];
        HashMap<String, DeTai> detai = new HashMap<>();
        for(int i = 0; i < m; i++){
            String id = String.format("DT%03d", (i+1));
            dsdt[i] = new DeTai(i+1, sc2.nextLine(), sc2.nextLine());
            detai.put(id, dsdt[i]);
        }
        Scanner sc3 = new Scanner(new File("HOIDONG.in"));
        int p = sc3.nextInt();
        HoiDong[] dshd = new HoiDong[p];
        for(int i = 0; i < p; i++){
            String msv = sc3.next();
            String idDeTai = sc3.next();
            String id = sc3.next();
            dshd[i] = new HoiDong(sv.get(msv), detai.get(idDeTai), id);
        }
        Arrays.sort(dshd);
        for(HoiDong x : dshd){
            System.out.println("DANH SACH HOI DONG " + x.getMaHD().substring(2) + ":");
            System.out.println(x);
        }
    }
}
