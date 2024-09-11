import java.util.Scanner;

public class catDoi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            int x = 0; long ans = 0;
            while(n > 0){
                long res = n % 10;
                if(res == 1) res = 1;
                else if(res == 0 || res == 8 || res == 9) res = 0;
                else{
                    ans = 0;
                    break;
                }
                ans += res * Math.pow(10, x);
                x++;
                n /= 10;
            }
            if(ans == 0) System.out.println("INVALID");
            else System.out.println(ans);
        }
        
    }
}
