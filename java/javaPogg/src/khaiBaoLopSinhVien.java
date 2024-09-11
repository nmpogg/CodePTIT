import java.util.*;

class SinhVien{
    private String id;
    private String name;
    private String classroom;
    private String birth;
    private double gpa;
    SinhVien(){};
    SinhVien(String id, String name, String classroom, String birth, double gpa){
        this.id = id;
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
    public String chuanHoaTen(){
        StringBuilder sb = new StringBuilder();
        String[] arr = this.name.split("\\s+");
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

public class khaiBaoLopSinhVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SinhVien a = new SinhVien("B20DCCN001", sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
        System.out.println(a);
    }
}
/*
Nguyen Hoa Binh
D20CQCN04-B
2/2/2002
2
*/
