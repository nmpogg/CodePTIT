/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package VanDongVien;

import java.util.*;
import java.time.*;
import java.time.format.DateTimeFormatter;

public class XepHangVanDongVien1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        VanDongVien[] ds = new VanDongVien[n];
        VanDongVien[] ans = new VanDongVien[n];
        for(int i = 0; i < n; i++){
            String ten = sc.nextLine();
            DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy");
            LocalDate day = LocalDate.parse(sc.nextLine(), format);
            LocalTime xp = LocalTime.parse(sc.nextLine());
            LocalTime dd = LocalTime.parse(sc.nextLine());
            ds[i] = new VanDongVien(i+1, ten, day, xp, dd);
            ans[i] = ds[i];
        }
        Arrays.sort(ds);
        HashMap<VanDongVien, Integer> rank = new HashMap<>();
        for(int i = 0; i < n; i++){
            if(i != 0 && ds[i].getThanhTichXepHang().equals(ds[i-1].getThanhTichXepHang())){
                rank.put(ds[i], rank.get(ds[i-1]));
            }
            else{
                rank.put(ds[i], i+1);
            }
        }
        for(VanDongVien x : ans){
            System.out.println(x + " " + rank.get(x));
        }
    }
}
/*
3
Nguyen Van Thanh
20/03/1990
07:00:00
07:10:01
Nguyen Hoa Binh
01/10/1993
07:02:00
07:11:20
Le Thanh Van
15/03/1998
07:05:00
07:15:30
*/