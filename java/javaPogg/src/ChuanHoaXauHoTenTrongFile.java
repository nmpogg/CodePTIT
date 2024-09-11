import java.util.*;
import java.io.*;

public class ChuanHoaXauHoTenTrongFile {
    public static void main(String[] args) {
        try{
            File file = new File("DATA.in");
            Scanner sc = new Scanner(file);
            while(true){
                String name = sc.nextLine().trim();
                if(name.equals("END")) break;
                String arr[] = name.split("\\s+");
                String ans = "";
                for(String x : arr){
                    ans += Character.toUpperCase(x.charAt(0));
                    for(int j = 1; j < x.length(); j++){
                        ans += Character.toLowerCase(x.charAt(j));
                    }
                    ans += " ";
                }
                System.out.println(ans.trim());
            }
        } catch(Exception e){};
    }
}
