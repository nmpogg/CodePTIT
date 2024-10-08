import java.util.*;

public class BangDiemTuyenSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangDiemTS[] ds = new BangDiemTS[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangDiemTS(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        for(BangDiemTS x : ds){
            System.out.println(x);
        }
    }
}
/*
2
KV2A002
Hoang Thanh Tuan
5
6
5
KV2B123
Ly Thi Thu Ha
8
6.5
7
*/