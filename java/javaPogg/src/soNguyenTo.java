import java.util.*;

public class soNguyenTo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int flag = 0;
            for(int i = 2; i <= Math.sqrt(n); i++){
                if(n % i == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) System.out.println("NO");
            else System.out.println("YES");
        }
    }
}
