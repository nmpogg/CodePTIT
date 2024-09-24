import java.util.*;

public class SapXepBangGiaXangDau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        NhienLieu[] ds = new NhienLieu[n];
        for(int i = 0; i < n; i++){
            ds[i] = new NhienLieu(sc.next(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(NhienLieu x : ds){
            System.out.println(x);
        }
    }
}
