import java.util.*;

public class SapXepBangTinhCong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangLuongNV[] ds = new BangLuongNV[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangLuongNV(i+1, sc.nextLine(), sc.nextInt(), sc.nextInt(), sc.next());
        }
        Arrays.sort(ds);
        for(BangLuongNV x : ds){
            System.out.println(x);
        }
    }
}
