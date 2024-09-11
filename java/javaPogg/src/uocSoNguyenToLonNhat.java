import java.util.Scanner;

public class uocSoNguyenToLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int ans = -1;
            for(int i = 2; i <= Math.sqrt(n); i++){
                if(n % i == 0){
                    ans = Math.max(ans, i);
                    while(n % i == 0) n /= i;
                }
            }
            ans = Math.max(ans, n);
            System.out.println(ans);
        }
    }
}
