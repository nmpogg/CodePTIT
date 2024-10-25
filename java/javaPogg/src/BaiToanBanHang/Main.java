/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package BaiToanBanHang;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author Admin
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("KH.in"));
        int n = sc1.nextInt();
        sc1.nextLine();
        HashMap<String, KhachHang> map1 = new HashMap<>();
        KhachHang[] dskh = new KhachHang[n];
        for(int i = 0; i < n; i++){
            dskh[i] = new KhachHang(i+1, sc1.nextLine(), sc1.nextLine(), sc1.nextLine(), sc1.nextLine());
            map1.put(String.format("KH%03d", i+1), dskh[i]);
        }
        Scanner sc2 = new Scanner(new File("MH.in"));
        int m = sc2.nextInt();
        MatHang[] dsmh = new MatHang[m];
        HashMap<String, MatHang> map2 = new HashMap<>();
        for(int i = 0; i < m; i++){
            sc2.nextLine();
            dsmh[i] = new MatHang(i+1, sc2.nextLine(), sc2.nextLine(), sc2.nextLong(), sc2.nextLong());
            map2.put(String.format("MH%03d", i+1), dsmh[i]);
        }
        Scanner sc3 = new Scanner(new File("HD.in"));
        int p = sc3.nextInt();
        HoaDon[] dshd = new HoaDon[p];
        for(int i = 0; i < p; i++){
            dshd[i] = new HoaDon(i+1, map1.get(sc3.next()), map2.get(sc3.next()), sc3.nextInt());
        }
        for(int i = 0; i < p; i++){
            System.out.println(dshd[i]);
        }
    }
    
}
