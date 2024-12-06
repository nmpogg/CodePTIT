/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2.Bai9;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Bai9 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien[] dssv = new SinhVien[n];
        HashMap<String, SinhVien> map1 = new HashMap<>();
        for(int i = 0; i < n; i++){
            String id = sc.nextLine();
            dssv[i] = new SinhVien(id, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            map1.put(id, dssv[i]);
        }
        Scanner sc1 = new Scanner(new File("DANGKY.in"));
        ArrayList<DangKi> dsdk = new ArrayList<>();
        for(int i = 0; i < n; i++){
            String id = sc1.next();
            String size = sc1.next();
            DangKi x = new DangKi(dssv[i], size);
            dsdk.add(x);
        }
        Collections.sort(dsdk);
        Scanner sc2 = new Scanner(new File("TRUYVAN.in"));
        int q = sc2.nextInt();
        while(q-- > 0){
            String gt = sc2.next();
            String size = sc2.next();
            System.out.println("DANH SACH SINH VIEN " + gt.toUpperCase() + " DANG KY SIZE " + size);
            for(DangKi x : dsdk){
                if(x.getGioiTinhSV().equals(gt) && x.getSize().equals(size)){
                    System.out.println(x);
                }
            }
        }
    }
}
