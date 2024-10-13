/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package HocBongSinhVien;

import java.util.*;

public class HocBongSinhVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        SinhVien[] ds = new SinhVien[n];
        SinhVien[] ans = new SinhVien[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVien(sc.nextLine(), sc.nextDouble(), sc.nextInt());
            ans[i] = ds[i];
        }
        Arrays.sort(ds);
        for(int i = 0; i < n; i++){
            if(m > 0){
                if(ds[i].loaiHocBong().equals("XUATSAC")){
                    ds[i].setHocBong("XUATSAC");
                    m -= 1;
                }
                else if(ds[i].loaiHocBong().equals("GIOI")){
                    ds[i].setHocBong("GIOI");
                    m -= 1;
                }
                else if(ds[i].loaiHocBong().equals("KHA")){
                    ds[i].setHocBong("KHA");
                     m -= 1;
                }
                else ds[i].setHocBong("KHONG");
            }
            else if (i != 0 && ds[i].getDrl()== ds[i-1].getDrl()){
                ds[i].setHocBong(ds[i].loaiHocBong());
            }
            else ds[i].setHocBong("KHONG");
        }
        for(SinhVien x : ans){
            System.out.println(x);
        }
    }
}
/*
3 2
Nguyen Van Nam
3.59 75
Tran Hong Ngoc
3.61 90
Do Van An
3.22 90
*/