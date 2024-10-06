/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

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

class NhiemVu implements Comparable<NhiemVu>{
    private SinhVienTT sv;
    private DeTai detai;

    public NhiemVu(SinhVienTT sv, DeTai detai) {
        this.sv = sv;
        this.detai = detai;
    }
    @Override
    public String toString(){
        return this.sv + " " + this.detai;
    }

    @Override
    public int compareTo(NhiemVu o) {
        return o.detai.getMaDT().compareTo(this.detai.getMaDT());
    }
}

public class ThucTapCoSo {
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
        Scanner sc3 = new Scanner(new File("NHIEMVU.in"));
        int p = sc3.nextInt();
        NhiemVu[] dsnv = new NhiemVu[p];
        for(int i = 0; i < p; i++){
            String msv = sc3.next();
            String idDeTai = sc3.next();
            dsnv[i] = new NhiemVu(sv.get(msv), detai.get(idDeTai));
        }
        Arrays.sort(dsnv);
        for(NhiemVu x : dsnv){
            System.out.println(x);
        }
    }
}
