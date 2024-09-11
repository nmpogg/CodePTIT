import java.util.*;

public class bienSoDep {
    public static boolean tangChat(char a[]){
        for(int i = 0; i < a.length-1; i++){
            if(a[i] >= a[i+1]) return false;
        }
        return true;
    }
    public static boolean bangNhau(char a[]){
        for(int i = 0; i < a.length - 1; i++){
            if(a[i] != a[i+1]) return false;
        }
        return true;
    }
    public static boolean dauCuoi(char a[]){
        if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return true;
        return false;
    }
    public static boolean locPhat(char a[]){
        for(int i = 0; i < a.length; i++){
            if(a[i] != '6' && a[i] != '8') return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            String res = s.substring(5, 8);
            res += s.substring(9);
            char[] a = res.toCharArray();
            if(tangChat(a) || bangNhau(a) || dauCuoi(a) || locPhat(a)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
