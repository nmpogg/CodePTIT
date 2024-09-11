import java.util.Scanner;
import java.util.Arrays;

public class boBaPytago {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long[] a = new long[n];
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                a[i] *= a[i];
            }
            Arrays.sort(a);
            boolean fl = false;
            out: for(int i = 0; i < n-2; i++){
                for(int j = i+1; j < n-1; j++){
                    if(Arrays.binarySearch(a, a[i] + a[j]) >= 0){
                        fl = true;
                        break out;                             
                    }
                }
            }
            if(fl == true) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
