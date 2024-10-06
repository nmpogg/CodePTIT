/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

import java.io.*;
import java.util.*;

public class ThietLapDiaChiEmail {
    public static String formatName(String s){
        String[] a = s.trim().split("\\s+");
        String ans = "";
        for(String x : a){
            ans += x.toLowerCase();
            ans += " ";
        }
        return ans.trim();
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        HashSet<String> hoten = new HashSet<>();
        HashMap<String, Integer> email = new HashMap<>();
        while(sc.hasNextLine()){
            String s = sc.nextLine();
            String res = formatName(s);
            if(!hoten.contains(res)){
                hoten.add(res);
                String[] a = res.split("\\s+");
                String ans = "";
                ans += a[a.length-1].toLowerCase();
                for(int i = 0; i < a.length-1; i++){
                    ans += Character.toLowerCase(a[i].charAt(0));
                }
                if(email.containsKey(ans)){
                    int freq = email.get(ans);
                    email.put(ans, freq+1);
                }
                else email.put(ans, 1);
                if(email.get(ans) > 1) ans += email.get(ans);
                ans += "@ptit.edu.vn";
                System.out.println(ans);
            }
        }
    }
}
/*
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
NGO QUOC VINH
Tran THI THU huong
*/
