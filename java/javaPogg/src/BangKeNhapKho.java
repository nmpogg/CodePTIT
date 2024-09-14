import java.util.*;

public class BangKeNhapKho {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHangKho[] ds = new MatHangKho[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new MatHangKho(sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        for(MatHangKho x : ds){
            System.out.println(x);
        }
    }
}
/*
3
May lanh SANYO
12
4000000
Dien thoai Samsung
30
3230000
Dien thoai Nokia
18
1240000
*/