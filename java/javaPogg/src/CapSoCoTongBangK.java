import java.util.*;

public class CapSoCoTongBangK {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] a = new int[n];
            Map<Integer, Integer> mp = new HashMap<>();
            for(int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                mp.put(a[i], mp.getOrDefault(a[i], 0) + 1);
            }
            Arrays.sort(a);
            long cnt = 0;
            for(int i = 0; i < n; i++) {
                if(Arrays.binarySearch(a, i+1, n, k - a[i]) >= 0) {
                    cnt += (mp.get(a[i]) - 1);
                    if(a[i] != k - a[i]) {
                        cnt += (mp.get(k - a[i]));
                        mp.put(k - a[i], mp.get(k - a[i]) - 1);
                    }
                    mp.put(a[i], mp.get(a[i]) - 1);
                }
            }
            System.out.println(cnt);
        }
    }
}

