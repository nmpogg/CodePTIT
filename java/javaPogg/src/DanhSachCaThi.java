import java.util.*;
import java.io.*;

class CaThi implements Comparable<CaThi>{
    private String id, day, time, idRoom;

    public CaThi(int id, String day, String time, String idRoom) {
        this.id = String.format("C%03d", id);
        this.day = day;
        this.time = time;
        this.idRoom = idRoom;
    }

    @Override
    public int compareTo(CaThi o) {
        if(!this.day.equals(o.day)) return this.day.compareTo(o.day);
        else if(!this.time.equals(o.time)) return this.time.compareTo(o.time);
        return this.id.compareTo(o.id);
    }
    public String toString(){
        return this.id + " " + this.day + " " + this.time + " " + this.idRoom;
    }
    
}

public class DanhSachCaThi {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("CATHI.in"));
        int n = sc.nextInt();
        ArrayList<CaThi> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            CaThi x = new CaThi(i, sc.next(), sc.next(), sc.next());
            ds.add(x);
        }
        Collections.sort(ds);
        for(CaThi x : ds){
            System.out.println(x);
        }
    }
}

/*
2
09/01/2022
15:30
70172
09/01/2022
10:00
70279
*/