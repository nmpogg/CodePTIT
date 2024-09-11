import java.util.*;
import java.io.*;

class SinhVien5{
    private String id, name, sdt, email;

    public SinhVien5(String id, String name, String sdt, String email) {
        this.id = id;
        this.name = name;
        this.sdt = sdt;
        this.email = email;
    }
    public String getName(){
        return this.name;
    }
    public String getId(){
        return this.id;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.sdt + " " + this.email;
    }
}

public class SapXepDanhSachSinhVien {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien5[] ds = new SinhVien5[n];
        for(int i = 0; i < n; i++){
            ds[i] = new SinhVien5(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds, new Comparator<SinhVien5>(){
            @Override
            public int compare(SinhVien5 a, SinhVien5 b) {
                String[] nameA = a.getName().split("\\s+");
                String[] nameB = b.getName().split("\\s+");
                if(!nameA[nameA.length-1].equals(nameB[nameB.length-1])) return nameA[nameA.length-1].compareTo(nameB[nameB.length-1]);
                for(int i = 0; i < Math.min(nameA.length, nameB.length); i++){
                    if(!nameA[i].equals(nameB[i])) return nameA[i].compareTo(nameB[i]);
                }
                return a.getId().compareTo(b.getId());
            }
            
        });
        for(SinhVien5 x : ds){
            System.out.println(x);
        }
    }
}
