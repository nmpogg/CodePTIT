import java.util.*;

class Nguoi implements Comparable<Nguoi>{
    private String name, ns;
    private String day, month, year;

    public Nguoi(String name, String ns) {
        this.name = name;
        this.ns = ns;
        this.day = ns.substring(0, 2);
        this.month = ns.substring(3, 5);
        this.year = ns.substring(6);
    }
    public String getName(){
        return this.name;
    }

    @Override
    public int compareTo(Nguoi t) {
        if(!this.year.equals(t.year)) return this.year.compareTo(t.year);
        else if(!this.month.equals(t.month)) return this.month.compareTo(t.month);
        return this.day.compareTo(t.day);
    }
}


public class TreNhatGiaNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Nguoi[] ds = new Nguoi[n];
        for(int i = 0; i < n; i++){
            ds[i] = new Nguoi(sc.next(), sc.next());
        }
        Arrays.sort(ds);
        System.out.println(ds[n-1].getName());
        System.out.println(ds[0].getName());
    }
}
