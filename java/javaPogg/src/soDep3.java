import java.util.Scanner;

public class soDep3 {
    public static boolean check(String s){
        int n = s.length();
        for(int i = 0; i < n; i++){
            int c = s.charAt(i) - '0';
            if(c != 2 && c != 3 && c != 5 && c != 7) return false;
            if(s.charAt(i) != s.charAt(n-i-1)) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
