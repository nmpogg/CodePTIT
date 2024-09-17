import java.util.*;

public class TraCuuDonHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        DonHang[] ds = new DonHang[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new DonHang(sc.nextLine(), sc.next(), sc.nextInt(), sc.nextInt());
        }
        for(DonHang x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Kaki 2
K0252
80000
15
Jean 1
J2011
200000
24
Jean 2
J0982
150000
12
*/
