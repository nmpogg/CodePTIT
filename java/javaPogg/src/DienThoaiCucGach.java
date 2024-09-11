import java.util.*;

public class DienThoaiCucGach {
    public static boolean checkTN(String s){
        for(int i = 0; i < s.length()/2; i++){
            if(s.charAt(i) != s.charAt(s.length()-i-1)) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next().toLowerCase();
            String ans = "";
            for(char c : s.toCharArray()){
                if(c == 'a' || c == 'b' || c == 'c') ans += "2";
                else if(c == 'd' || c == 'e' || c == 'f') ans += "3";
                else if(c == 'g' || c == 'h' || c == 'i') ans += "4";
                else if(c == 'j' || c == 'k' || c == 'l') ans += "5";
                else if(c == 'm' || c == 'n' || c == 'o') ans += "6";
                else if(c == 'p' || c == 'q' || c == 'r' || c == 's') ans += "7";
                else if(c == 't' || c == 'u' || c == 'v') ans += "8";
                else ans += "9";
            }
            if(checkTN(ans)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
