import java.util.*;
import java.io.*;

public class XuLyVanBan {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(System.in);
        ArrayList<String> arr = new ArrayList<>();
        while(sc.hasNextLine()){
            String s = sc.nextLine().trim();
            String dong = "";
            for(char x : s.toCharArray()){
                if(x == '.' || x == '?'|| x == '!') dong += ".";
                else dong += x;
            }
            String[] nhieuCau = dong.trim().split("\\.");
            ArrayList<String> cau = new ArrayList<>();
            for(String x : nhieuCau){
                cau.add(x.trim());
            }
            for(String it : cau){
                String[] a = it.split("\\s+");
                String ans = "";
                for(int i = 0; i < a.length; i++){
                    if(i == 0){
                        ans += Character.toUpperCase(a[i].charAt(0));
                        for(int j = 1; j < a[i].length(); j++){
                            ans += Character.toLowerCase(a[i].charAt(j));
                        }
                    }
                    else{
                        for(char c : a[i].toCharArray()) ans += Character.toLowerCase(c);
                    }
                    ans += " ";
                }
                arr.add(ans.trim());
            }
        }
        for(String x : arr) System.out.println(x);
    }
}
