import java.util.*;

public class LapBangTinhCong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangLuongNV[] ds = new BangLuongNV[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangLuongNV(i+1, sc.nextLine(), sc.nextInt(), sc.nextInt(), sc.next());
        }
        for(BangLuongNV x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Cao Van Vu
50000
26
GD
Do Van Truong
40000
25
PGD
Truong Thi Tu Linh
45000
22
NV
*/