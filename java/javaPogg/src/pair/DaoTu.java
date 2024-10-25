/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

import java.util.*;

public class DaoTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String[] s = sc.nextLine().split("\\s+");
            Stack<String> st = new Stack<>();
            for(String x : s){
                st.add(x);
            }
            while(!st.empty()){
                System.out.print(st.pop() + " ");
            }
            System.out.println("");
        }
    }
 
}
/*
2
I like this program very much
much very program this like I
*/