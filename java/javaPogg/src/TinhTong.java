import java.io.*;
import java.util.*;

public class TinhTong {
    public static boolean check(String s){
        if(s.length() > 10) return false;
        for(char x : s.toCharArray()){
            if(!Character.isDigit(x)) return false; 
        }
        return true;
    }
    public static void main(String[] args) throws Exception{
        File file = new File("DATA.in");
        Scanner sc = new Scanner(file);
        long ans = 0;
        while(sc.hasNext()){
            String s = sc.next();
            if(check(s)){
                ans += Integer.parseInt(s);
            }
        }
        
        System.out.println(ans);
    }
}
