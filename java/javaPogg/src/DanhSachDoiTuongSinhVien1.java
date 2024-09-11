import java.util.*;

class SinhVien1{
    private String id;
    private String name;
    private String classroom;
    private String birth;
    private double gpa;
    SinhVien1(){};
    SinhVien1(int id, String name, String classroom, String birth, double gpa){
        this.id = "B20DCCN" + String.format("%03d", id);
        this.name = name;
        this.classroom = classroom;
        this.birth = birth;
        this.gpa = gpa;
    }
    public String chuanHoaNgaySinh(){
        StringBuilder sb = new StringBuilder(birth);
        if(sb.charAt(1) == '/') sb.insert(0, '0');
        if(sb.charAt(4) == '/') sb.insert(3, '0');
        return sb.toString();
    }
    @Override
    public String toString() {
        return id + " " + name + " " + classroom + " " + chuanHoaNgaySinh() + " " + String.format("%.2f", gpa);
    }
}

public class DanhSachDoiTuongSinhVien1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<SinhVien1> arr = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            SinhVien1 x = new SinhVien1(i, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
            arr.add(x);
        }
        for(SinhVien1 x : arr) System.out.println(x);
    }
}
/*
1
Nguyen Van An
D20CQCN01-B
2/12/2002
3.19
*/
