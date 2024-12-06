/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.*;
class KhachHang2 implements Comparable<KhachHang2>{
    private String maKH, tenKH, gioiTinh, ngaySinh, diaChi;

    public KhachHang2(int maKH, String tenKH, String gioiTinh, String ngaySinh, String diaChi) {
        this.maKH = String.format("KH%03d", maKH);
        this.tenKH = tenKH;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
        this.diaChi = diaChi;
    }
    public String chuanHoaTen(){
        String ans = "";
        String[] name = this.tenKH.trim().split("\\s+");
        for(String x : name){
            ans += Character.toUpperCase(x.charAt(0));
            for(int j = 1; j < x.length(); j++){
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }
    
    public String chuanHoaNgaySinh(){
        StringBuilder sb = new StringBuilder(this.ngaySinh);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/')  sb.insert(3, "0");
        return sb.toString();
    }

    @Override
    public int compareTo(KhachHang2 o) {
        DateTimeFormatter fm = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        LocalDate nsA = LocalDate.parse(this.chuanHoaNgaySinh(), fm);
        LocalDate nsB = LocalDate.parse(o.chuanHoaNgaySinh(), fm);
        if(nsA.isBefore(nsB)) return -1;
        return 1;
    }
    public String toString(){
        return this.maKH + " " + this.chuanHoaTen() + " " + this.gioiTinh + " " + this.diaChi + " " + this.chuanHoaNgaySinh();
    }
}

public class DanhSachKhachHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        KhachHang2[] dskh = new KhachHang2[n];
        for(int i = 0; i < n; i++){
            dskh[i] = new KhachHang2(i+1, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(dskh);
        for(KhachHang2 x : dskh){
            System.out.println(x);
        }
    }
}
/*
2
 nGuyen VAN     nAm
Nam
12/12/1997
Mo Lao-Ha Dong-Ha Noi
 TRan    vAn     biNh
Nam
14/11/1995
Phung Khoang-Nam Tu Liem-Ha Noi
*/