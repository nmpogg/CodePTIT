import java.util.*;

public class CauLacBoBongDa1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashMap<String, CLB> club = new HashMap<>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            String maCLB = sc.nextLine();
            String tenCLB = sc.nextLine();
            int giaVe = sc.nextInt();
            CLB x = new CLB(maCLB, tenCLB, giaVe);
            club.put(maCLB, x);
        }
        int q = sc.nextInt();
        while(q-- > 0){
            String maTD = sc.next();
            int soCDV = sc.nextInt();
            TranDau x = new TranDau(maTD, soCDV, club.get(maTD.substring(1, 3)));
            System.out.println(x);
        }
    }
}
/*
2
AC
AC Milan
12
MU
Manchester United
10
2
IAC1 80000
EMU2 60000
*/