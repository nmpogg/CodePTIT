import java.util.*;

public class TinhGiaBan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHang3[] ds = new MatHang3[n];
        for(int i = 0; i < n; i++){
            ds[i] = new MatHang3(i+1, sc.next(), sc.next(), sc.nextInt(), sc.nextInt());
        }
        for(MatHang3 x : ds){
            System.out.println(x);
        }
    }
}
/*
4
DUONG
KG
7500
150
TRUNG
CHUC
10000
225
GAO
KG
14000
118
SUA
HOP
48000
430
*/