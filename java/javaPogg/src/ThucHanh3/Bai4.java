/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;
import java.util.*;
import java.io.*;
/**
 *
 * @author Admin
 */
public class Bai4 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BAITAP.in"));
        ArrayList<BaiTap> dsbt = new ArrayList<>();
        HashMap<String, BaiTap> map = new HashMap<>();
        while(sc.hasNextLine()){
            String msv = sc.nextLine();
            BaiTap x = new BaiTap(msv, sc.nextLine(), sc.nextLine());
            map.put(msv, x);
        }
        Scanner sc1 = new Scanner(new File("BAOCAO.in"));
        ArrayList<BaoCao> dsbc = new ArrayList<>();
        int caSang = 0, caChieu = 0;
        while(sc1.hasNextLine()){
            String msv = sc1.nextLine();
            String time = sc1.nextLine();
            if(time.charAt(0) == '0') caSang++;
            else caChieu++;
            BaoCao bc = new BaoCao(map.get(msv), time);
            dsbc.add(bc);
        }
        System.out.println("DANH SACH SINH VIEN BAO CAO CA SANG: " + caSang);
        for(BaoCao x : dsbc){
            if(x.isCaSang()){
                System.out.println(x);
            }
        }
        System.out.println("DANH SACH SINH VIEN BAO CAO CA CHIEU: " + caChieu);
        for(BaoCao x : dsbc){
            if(!x.isCaSang()){
                System.out.println(x);
            }
        }
    }
}
