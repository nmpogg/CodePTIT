import java.util.*;



public class SapXepDanhSachDoiTuongNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<Employees> a = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            String ten = sc.nextLine();
            String gioiTinh = sc.nextLine();
            String ns = sc.nextLine();
            String dc = sc.nextLine();
            String ma = sc.nextLine();
            String day = sc.nextLine();
            Employees x = new Employees(i, ten, gioiTinh, ns, dc, ma, day);
            a.add(x);
        }
        Collections.sort(a, new Comparator<Employees>(){
            @Override
            public int compare(Employees a, Employees b) {
                StringBuilder x = new StringBuilder(a.getBirth());
                StringBuilder y = new StringBuilder(b.getBirth());
                return x.reverse().toString().compareTo(y.reverse().toString());  
            }
            
        });
        for(Employees x : a){
            System.out.println(x);
        }
    }
}

/*
3
Nguyen Van A
Nam
22/10/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
15/10/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/