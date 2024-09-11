import java.util.*;
import java.io.*;
        
class MonThi{
    private String id, name, hinhThuc;

    public MonThi(String id, String name, String hinhThuc) {
        this.id = id;
        this.name = name;
        this.hinhThuc = hinhThuc;
    }
    public String getID(){
        return this.id;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.hinhThuc;
    }
}

public class DanhSachMonThi {
    public static void main(String[] args) throws Exception {
        File file = new File("MONHOC.in");
        Scanner sc = new Scanner(file);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<MonThi> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            MonThi x = new MonThi(sc.nextLine(), sc.nextLine(),sc.nextLine());
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<MonThi>(){
            @Override
            public int compare(MonThi t, MonThi t1) {
                return t.getID().compareTo(t1.getID());
            }
            
        });
        for(MonThi x : ds){
            System.out.println(x);
        }
    }
}
