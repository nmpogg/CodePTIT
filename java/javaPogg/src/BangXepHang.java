import java.util.*;

class SinhVien6 implements Comparable<SinhVien6>{
    private String name;
    private int AC, submit;

    public SinhVien6(String name, int AC, int submit) {
        this.name = name;
        this.AC = AC;
        this.submit = submit;
    }

    @Override
    public int compareTo(SinhVien6 o) {
        if(this.AC != o.AC) return o.AC - this.AC;
        else if(this.submit != o.submit) return this.submit - o.submit;
        return this.name.compareTo(o.name);
    }
    public String toString(){
        return this.name + " " + this.AC + " " + this.submit;
    }
}

public class BangXepHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        SinhVien6[] ds = new SinhVien6[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVien6(sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(SinhVien6 x : ds){
            System.out.println(x);
        }
    }
}
