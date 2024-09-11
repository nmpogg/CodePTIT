import java.util.*;
import java.io.*;

public class LietKeTuKhacNhau {
    public static void main(String[] args) {
        try{
            File file = new File("VANBAN.in");
            Scanner sc = new Scanner(file);
            TreeSet<String> set = new TreeSet<>();
            while(sc.hasNext()){
                String s = sc.next().toLowerCase();
                set.add(s);
            }
            for(String x : set){
                System.out.println(x);
            }
        } catch(Exception e){};
    }
}
