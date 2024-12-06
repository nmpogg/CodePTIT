/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */

import java.util.*;

class LopHocPhan implements Comparable<LopHocPhan>{
    private String maMH, tenMH, nhomLop, tenGV;

    public LopHocPhan(String maMH, String tenMH, String nhomLop, String tenGV) {
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.nhomLop = nhomLop;
        this.tenGV = tenGV;
    }
    public String getMaMH(){
        return this.maMH;
    }

    @Override
    public int compareTo(LopHocPhan o) {
        return Integer.parseInt(nhomLop) - Integer.parseInt(o.nhomLop);
    }
    public String toString(){
        return this.nhomLop + " " + this.tenGV;
    }
}

public class LopHocPhan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        LopHocPhan[] dsLop = new LopHocPhan[n];
        HashMap<String, String> map = new HashMap<>();
        for(int i = 0; i < n; i++){
            String maLop = sc.nextLine();
            String tenLop = sc.nextLine();
            dsLop[i] = new LopHocPhan(maLop, tenLop, sc.nextLine(), sc.nextLine());
            map.put(maLop, tenLop);
        }
        Arrays.sort(dsLop);
        int q = sc.nextInt();
        while(q-- > 0){
            String s = sc.next();
            System.out.println("Danh sach nhom lop mon " + map.get(s) + ":");
            for(LopHocPhan x : dsLop){
                if(x.getMaMH().equals(s)){
                    System.out.println(x);
                }
            }
        }
    }
}
/*
4
THCS2D20
Tin hoc co so 2 - D20
01
Nguyen Binh An
CPPD20
Ngon ngu lap trinh C++ - D20
01
Le Van Cong
THCS2D20
Tin hoc co so 2 - D20
02
Nguyen Trung Binh
LTHDTD19
Lap trinh huong doi tuong - D19
01
Nguyen Binh An
1
THCS2D20
*/
