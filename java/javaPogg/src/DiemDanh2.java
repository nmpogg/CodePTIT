import java.util.*;


public class DiemDanh2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien3[] ds = new SinhVien3[n];
        HashMap<String, SinhVien3> map = new HashMap<>();
        for(int i = 0; i < n; i++){
            String msv = sc.nextLine();
            ds[i] = new SinhVien3(msv, sc.nextLine(), sc.nextLine());
            map.put(msv, ds[i]);
        }
        for(int i = 0; i < n; i++){
            String msv = sc.next();
            String dd = sc.next();
            map.get(msv).setDiemChuyenCan(dd);
        }
        String s = sc.next();
        for(SinhVien3 x : ds){
            if(x.getLop().equals(s)){
                System.out.println(x);
            }
        }
    }
}
/*
3
B19DCCN999
Le Cong Minh
D19CQAT02-B
B19DCCN998
Tran Truong Giang
D19CQAT02-B
B19DCCN997
Nguyen Tuan Anh
D19CQCN04-B
B19DCCN998 xxxmxmmvmx
B19DCCN997 xmxmxxxvxx
B19DCCN999 xvxmxmmvvm
D19CQAT02-B
*/