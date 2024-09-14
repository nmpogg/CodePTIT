import java.util.*;

public class SapXepBangTinhTienDien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HoaDonDien[] ds = new HoaDonDien[n];
        for(int i = 0; i < n; i++){
            ds[i] = new HoaDonDien(i+1, sc.next(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(HoaDonDien x : ds){
            System.out.println(x);
        }
    }
}
