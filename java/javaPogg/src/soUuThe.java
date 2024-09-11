import java.util.Scanner;

public class soUuThe {
    public static int check(String s){
        int n = s.length();
        int le = 0, chan = 0;
        for(int i = 0; i < n; i++){
            char c = s.charAt(i);
            if(Character.isDigit(c) == false) return -1;
            int x = c - '0';
            if(x % 2 == 0) chan++;
            else le++;
        }
        if(n % 2 == 0 && chan > le) return 1;
        if(n % 2 == 1 && le > chan) return 1;
        return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            if(check(s) == 1) System.out.println("YES");
            else if(check(s) == 0) System.out.println("NO");
            else System.out.println("INVALID");
        }
    }
}
