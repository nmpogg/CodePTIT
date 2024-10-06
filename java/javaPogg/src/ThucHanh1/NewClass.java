/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;
import java.util.*;
import java.io.*;

public class NewClass {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        long ans = 0;
        while(sc.hasNext()){
            String s = sc.next();
            try{
                long res = Long.parseLong(s);
                if(res > Integer.MAX_VALUE){
                    ans += res;
                }
            } catch (Exception e){}
        }
        System.out.println(ans);
    }
}
