import java.util.*;

public class khoangCachNhoHonK {
    public static long lowerBound(long a[], int l, int r, long pos){
        while(l < r){
            int m = (l + r) / 2;
            if(a[m] < pos){
                l = m + 1;
            }
            else r = m;
        }
        return l;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long k = sc.nextLong();
            long[] a = new long[n];
            for(int i = 0; i < n; i++){
                a[i] = sc.nextLong();
            }
            Arrays.sort(a);
            long ans = 0;
            for(int i = 0; i < n; i++){
                long it = lowerBound(a, i + 1, n, a[i]+k);
                ans += (it - (i + 1));
            }
            System.out.println(ans);
        }
    }     
}
