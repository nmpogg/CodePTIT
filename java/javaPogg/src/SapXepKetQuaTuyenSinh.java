import java.util.*;

public class SapXepKetQuaTuyenSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangDiemTS[] ds = new BangDiemTS[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangDiemTS(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds);
        for(BangDiemTS x : ds){
            System.out.println(x);
        }
    }
}
