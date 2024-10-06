/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

import java.util.*;

public class TinhDiemTrungBinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double[] a = new double[n];
        double max_val = -1;
        double min_val = 11;
        for(int i = 0; i < n; i++){
            a[i] = sc.nextDouble();
            max_val = Math.max(max_val, a[i]);
            min_val = Math.min(min_val, a[i]);
        }
        double ans = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if( a[i] != min_val && a[i] != max_val){
                ans += a[i];
                cnt += 1;
            }
        }
        System.out.printf("%.2f", ans/cnt);
    }
}
