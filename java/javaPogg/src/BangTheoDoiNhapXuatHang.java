import java.util.*;


public class BangTheoDoiNhapXuatHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHangNongSan[] ds = new MatHangNongSan[n];
        for(int i = 0; i < n; i++){
            ds[i] = new MatHangNongSan(sc.next(), sc.nextLong());
        }
        for(MatHangNongSan x : ds){
            if(x.isValid())
                System.out.println(x);
        }
    }
}
