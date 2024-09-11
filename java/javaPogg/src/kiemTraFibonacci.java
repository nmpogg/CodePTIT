import java.util.Scanner;

public class kiemTraFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            long a = 1, b = 1, c = 0;
            boolean flag = false;
            for(int i = 3; i < 93; i++){
                c = a + b;
                if(c == n){
                    flag = true;
                    break;
                }
                a = b;
                b = c;
            }
            if(n == 0 || n == 1) flag = true;
            if(flag) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
