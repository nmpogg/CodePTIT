import java.util.*;

public class chiaHetCho11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            int oddIdx = 0, evenIdx = 0;
            for(int i = 0; i < s.length(); i++){
                if(i % 2 == 0) evenIdx += (s.charAt(i) - '0');
                else oddIdx += (s.charAt(i) - '0');
            }
            int sub = Math.abs(oddIdx - evenIdx);
            if(sub % 11 == 0) System.out.println("1");
            else System.out.println("0");
        }
    }
}
