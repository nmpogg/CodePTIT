import java.util.*;

class SinhVien2{
    private String id;
    private String name;
    private String classroom;
    private String birth;
    private double gpa;
    SinhVien2(){};
    SinhVien2(int id, String name, String classroom, String birth, double gpa){
        this.id = "B20DCCN" + String.format("%03d", id);
        this.name = name;
        this.classroom = classroom;
        this.birth = birth;
        this.gpa = gpa;
    }
    public double getGPA(){
        return this.gpa;
    }
    public String chuanHoaNgaySinh(){
        StringBuilder sb = new StringBuilder(birth);
        if(sb.charAt(1) == '/') sb.insert(0, '0');
        if(sb.charAt(4) == '/') sb.insert(3, '0');
        return sb.toString();
    }
    public String chuanHoaTen(){
        StringBuilder sb = new StringBuilder();
        String[] arr = this.name.trim().split("\\s+");
        for(String x : arr){
            sb.append(Character.toUpperCase(x.charAt(0)));
            for(int j = 1; j < x.length(); j++){
                sb.append(Character.toLowerCase(x.charAt(j)));
            }
            sb.append(" ");
        }
        return sb.toString().trim();
    }
    @Override
    public String toString() {
        return this.id + " " + chuanHoaTen() + " " + this.classroom + " " + chuanHoaNgaySinh() + " " + String.format("%.2f", gpa);
    }
}

public class DanhSachDoiTuongSinhVien2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<SinhVien2> arr = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            SinhVien2 x = new SinhVien2(i, sc.nextLine().trim(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
            arr.add(x);
        }
        for(SinhVien2 x : arr){
            System.out.println(x);
        }
    }
}
/*
1
nGuyEn  vaN    biNH
D20CQCN01-B
2/12/2002
3.1
*/
