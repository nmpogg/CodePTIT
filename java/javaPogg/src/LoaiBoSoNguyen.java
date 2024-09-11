import java.util.*;
import java.io.*;

public class LoaiBoSoNguyen {
    public static boolean check(String s){
        if(s.length() > 10) return false;
        for(char x : s.toCharArray()){
            if(!Character.isDigit(x)) return false; 
        }
        return true;
    }
    public static void main(String[] args) throws Exception {
        File file = new File("DATA.in");
        Scanner sc = new Scanner(file);
        ArrayList<String> arr = new ArrayList<>();
        while(sc.hasNext()){
            String s = sc.next();
            if(!check(s)) arr.add(s);
        }
        Collections.sort(arr, new Comparator<String>(){
            @Override
            public int compare(String a, String b) {
                return a.compareTo(b);
            }
            
        });
        for(String x : arr) System.out.print(x + " ");
    }
}
