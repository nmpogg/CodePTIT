import java.util.*;
import java.io.*;

public class TongChuSo {
    public static int tongChuSo(String s){
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            sum += s.charAt(i) - '0';
        }
        return sum;
    }
    public static void main(String[] args) throws Exception {
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> arr = (ArrayList<String>) data.readObject();
//         Scanner sc = new Scanner(System.in);
//         ArrayList<String> arr = new ArrayList<>();
//        for(int i = 0; i < 2; i++){
//            String s = sc.next();
//            arr.add(s);
//        }
        for(String x : arr){
            String res = "";
            for(char c : x.toCharArray()){
                if(c == '0' && res.isEmpty()) continue;
                else if(Character.isDigit(c)) res += c;
            }
            System.out.println(res + " " + tongChuSo(res));
        }
    }
}
