/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

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
/*
4
4 6
1 5 7 -1
5 6
1 5 7 -1 5
4 2
1 1 1 1
13 11
10 12 10 15 -1 7 6 5 4 2 1 1 1
*/
