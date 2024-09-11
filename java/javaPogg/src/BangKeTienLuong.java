import java.util.*;


public class BangKeTienLuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangLuongNV[] ds = new BangLuongNV[n];
        int tongLuong = 0;
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangLuongNV(i+1, sc.nextLine(), sc.nextInt(), sc.nextInt(), sc.next());
            tongLuong += ds[i].getThucLinh();
        }
        for(BangLuongNV x : ds){
            System.out.println(x);
        }
        System.out.println("Tong chi phi tien luong: " + tongLuong);
    }
}
/*
5
Cao Van Vu
50000
26
GD
Bui Thi Trang
45000
23
PGD
Do Van Truong
40000
25
PGD
Nguyen Van Cam
37000
26
TP
Truong Thi Tu Linh
45000
22
NV
*/