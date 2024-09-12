import java.util.*;

public class TinhThuNhapChoNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        NhanVien1[] ds = new NhanVien1[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new NhanVien1(i+1, sc.nextLine(), sc.nextLine(), sc.nextLong(), sc.nextLong());
        }
        for(NhanVien1 x : ds){
            System.out.println(x);
        }
    }
}
/*
4
Tran Thi Yen
NV
1000
24
Nguyen Van Thanh
BV
1000
30
Doan Truong An
TP
3000
25
Le Thanh
GD
5000
28
*/