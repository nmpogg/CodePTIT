import java.util.*;
public class BangDiemThanhhPhan1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangDiemTP[] ds = new BangDiemTP[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangDiemTP(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds, new Comparator<BangDiemTP>(){
            @Override
            public int compare(BangDiemTP t, BangDiemTP t1) {
                return t.getId().compareTo(t1.getId());
            }
            
        });
        for(int i = 0; i < n; i++){
            System.out.println((i+1) + " " + ds[i]);
        }
    }
}
/*
3
B20DCCN999
Nguyen Van An
D20CQCN04-B
10.0
9.0
8.0
B20DCAT001
Le Van Nam
D20CQAT02-B
6.0
6.0
4.0
B20DCCN111
Tran Hoa Binh
D20CQCN04-B
9.0
5.0
6.0
*/