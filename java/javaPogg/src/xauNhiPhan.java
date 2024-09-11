import java.util.Scanner;

public class xauNhiPhan {
    public static long[] a = new long[93];
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        a[1] = a[2] = 1;
        for(int i = 3; i < 93; i++) a[i] = a[i-1] + a[i-2];
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long k = sc.nextLong();
            while(n > 2){
                if(k <= a[n-2]) n -= 2;
                else{
                    k -= a[n-2];
                    n -= 1;
                }
            }
            if(n == 1) System.out.println("0");
            else System.out.println("1");
        }
    }
}
