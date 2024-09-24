import java.io.*;
import java.util.*;

public class TinhTong {
    public static void main(String[] args) throws Exception{
        File file = new File("DATA.in");
        Scanner sc = new Scanner(file);
        long ans = 0;
        while(sc.hasNext()){
            String s = sc.next();
            try{
                ans += Integer.parseInt(s);
            } catch(Exception e){}
        }
        
        System.out.println(ans);
    }
}
