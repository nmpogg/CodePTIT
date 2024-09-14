import java.util.*;

public class LietKeNhapXuatHangTheoNhom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHangNongSan[] ds = new MatHangNongSan[n];
        for(int i = 0; i < n; i++){
            ds[i] = new MatHangNongSan(sc.next(), sc.nextInt());
        }
        Arrays.sort(ds);
        char c = sc.next().charAt(0);
        for(MatHangNongSan x : ds){
            if(x.getMaMH().charAt(0) == c)
                System.out.println(x);
        }
    }
}
