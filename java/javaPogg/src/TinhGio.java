import java.util.*;

class Gamer{
    private String id, name, in, out;

    public Gamer(String id, String name, String in, String out) {
        this.id = id;
        this.name = name;
        this.in = in;
        this.out = out;
    }

    public int getTime(){
        int time = (Integer.parseInt(this.out.substring(0, 2)) - Integer.parseInt(this.in.substring(0, 2))) * 60 + Integer.parseInt(this.out.substring(3)) - Integer.parseInt(this.in.substring(3));
        return time;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + String.format("%d gio %d phut", getTime()/60, getTime()%60);
    }
}

public class TinhGio {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        Gamer[] ds = new Gamer[n];
        for(int i = 0; i < n; i++){
            ds[i] = new Gamer(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds, new Comparator<Gamer>(){
            @Override
            public int compare(Gamer a, Gamer b) {
                return b.getTime() - a.getTime();
            }
            
        });
        for(Gamer x : ds){
            System.out.println(x);
        }
    }
}
/*
3
01T
Nguyen Van An
09:00
10:30
06T
Hoang Van Nam
15:30
18:00
02I
Tran Hoa Binh
09:05
10:00
*/