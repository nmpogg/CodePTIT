/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

import java.util.*;

public class TangDanGiamDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            TreeSet<Integer> chan = new TreeSet<>();
            TreeSet<Integer> le = new TreeSet<>(Comparator.reverseOrder());
            for(int i = 0; i < n; i++){
                int x = sc.nextInt();
                if(x % 2 == 0){
                    chan.add(x);
                }
                else le.add(x);
            }
            for(int x : chan){
                System.out.print(x + " ");
            }
            System.out.println("");
            for(int x : le){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
/*
1
7
3 7 12 8 5 4 888
*/