import java.util.*;


public class DanhSachDoiTuongSinhVien3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<SinhVien2> arr = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            SinhVien2 x = new SinhVien2(i, sc.nextLine().trim(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
            arr.add(x);
        }
        Collections.sort(arr, new Comparator<SinhVien2>(){
            @Override
            public int compare(SinhVien2 t, SinhVien2 t1) {
                if(t.getGPA() > t1.getGPA()) return -1;
                else return 1;
            }           
        });
        for(SinhVien2 x : arr){
            System.out.println(x);
        }
    }
}
/*
2
ngUYen Van Nam
D20DCCN01-B
2/12/1994
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/1994
3.0
*/
