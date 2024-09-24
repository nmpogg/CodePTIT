import java.util.*;

public class CauLacBoBongDa2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<String, CLB> clb = new HashMap<>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            String id = sc.nextLine();
            String name = sc.nextLine();
            int gv = sc.nextInt();
            CLB x = new CLB(id, name, gv);
            clb.put(id, x);
        }
        int m = sc.nextInt();
        TranDau[] ds = new TranDau[n];
        for(int i = 0; i < m; i++){
            String idm = sc.next();
            int num = sc.nextInt();
            ds[i] = new TranDau(idm, num, clb.get(idm.substring(1, 3)));
        }
        Arrays.sort(ds);
        for(TranDau x : ds){
            System.out.println(x);
        }
    }
}
