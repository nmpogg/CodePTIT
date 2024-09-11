
import java.util.*;

public class TinhGiaBan2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHang3[] ds = new MatHang3[n];
        for(int i = 0; i < n; i++){
            ds[i] = new MatHang3(i+1, sc.next(), sc.next(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds, new Comparator<MatHang3>(){
            @Override
            public int compare(MatHang3 t, MatHang3 t1) {
                return (int)t1.GiaBan2() - (int)t.GiaBan2();
            }
            
        });
        for(MatHang3 x : ds){
            System.out.println(x);
        }
    }
}
