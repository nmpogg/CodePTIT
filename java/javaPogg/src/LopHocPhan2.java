/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */
import java.util.*;

class LopHoc implements Comparable<LopHoc>{
    private String maMH, tenMH, nhomLop, tenGV;

    public LopHoc(String maMH, String tenMH, String nhomLop, String tenGV) {
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.nhomLop = nhomLop;
        this.tenGV = tenGV;
    }
    public String getTenGV(){
        return this.tenGV;
    }
    @Override
    public int compareTo(LopHoc o) {
        if(!this.maMH.equals(o.maMH)){
            return this.maMH.compareTo(o.maMH);
        }
        return this.nhomLop.compareTo(o.nhomLop);
    }
    @Override
    public String toString(){
        return this.maMH + " " + this.tenMH + " " + this.nhomLop;
    }
}


public class LopHocPhan2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        LopHoc[] dsLop = new LopHoc[n];
        for(int i = 0; i < n; i++){
            dsLop[i] = new LopHoc(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(dsLop);
        int q = sc.nextInt();
        sc.nextLine();
        while(q-- > 0){
            String s = sc.nextLine();
            System.out.println("Danh sach cho giang vien " + s + ":");
            for(LopHoc x : dsLop){
                if(x.getTenGV().equals(s)){
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
Nguyen Binh An
*/