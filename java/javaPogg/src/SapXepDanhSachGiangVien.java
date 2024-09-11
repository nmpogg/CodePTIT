import java.util.*;

public class SapXepDanhSachGiangVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        GiangVien[] ds = new GiangVien[n];
        for(int i = 0; i < n; i++){
            ds[i] = new GiangVien(i+1, sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds, new Comparator<GiangVien>(){
            @Override
            public int compare(GiangVien t, GiangVien t1) {
                if(t.getName().equals(t1)) return t.getId().compareTo(t1.getId());
                return t.getName().compareTo(t1.getName());
            }
            
        });
        for(GiangVien x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
*/