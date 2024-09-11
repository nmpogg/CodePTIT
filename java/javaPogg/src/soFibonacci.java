import java.util.Scanner;

public class soFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long a = 1, b = 1, ans = 0;
            for(int i = 3; i <= n; i++){
                ans = a + b;
                a = b;
                b = ans;
            }
            if(n == 1 || n == 2) System.out.println(1);
            else System.out.println(ans);
        }
    }
}
