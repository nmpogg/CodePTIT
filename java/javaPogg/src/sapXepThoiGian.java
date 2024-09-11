import java.util.*;

class Time{
    private int hour, minute, second;
    Time(int hour, int minute, int second){
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }
    public int getHour(){
        return this.hour;
    }
    public int getMinute(){
        return this.minute;
    }
    public int getSecond(){
        return this.second;
    }
    @Override
    public String toString(){
        return this.hour + " " + this.minute + " " + this.second;
    }
}

public class sapXepThoiGian {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Time> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            Time x = new Time(sc.nextInt(), sc.nextInt(), sc.nextInt());
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<Time>(){
            @Override
            public int compare(Time a, Time b) {
                if(a.getHour() != b.getHour()){
                    return a.getHour() - b.getHour();
                }
                else if(a.getMinute() != b.getMinute()){
                    return a.getMinute() - b.getMinute();
                }
                else return a.getSecond() - b.getSecond();
            }         
        });
        for(Time x : ds){
            System.out.println(x);
        }
    }
}
