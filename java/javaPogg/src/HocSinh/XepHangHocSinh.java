/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package HocSinh;

import java.util.*;

public class XepHangHocSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HocSinh[] ds = new HocSinh[n];
        HocSinh[] ans = new HocSinh[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new HocSinh(i+1, sc.nextLine(), sc.nextDouble());
            ans[i] = ds[i];
        }
        Arrays.sort(ds);
        HashMap<HocSinh, Integer> rank = new HashMap<>();
        for(int i = 0; i < n; i++){
            if(i != 0 && ds[i].getDtb() == ds[i-1].getDtb()){
                rank.put(ds[i], rank.get(ds[i-1]));
            }
            else rank.put(ds[i], i+1);
        }
        for(HocSinh x : ans){
            System.out.println(x + " " + rank.get(x));
        }
    }
}
/*
3
Tran Minh Hieu
5.9
Nguyen Bao Trung
8.6
Le Hong Ha
9.2
*/