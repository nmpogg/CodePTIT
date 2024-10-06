/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

import java.util.*;
import java.io.*;

public class XuLyVanBan2 {
    public static boolean chuaSo(String s){
        for(char c : s.toCharArray()){
            if(Character.isDigit(c)) return true;
        }
        return false;
    }
    public static boolean check2(String s){
        for(char c : s.toCharArray()){
            if(c == '.' || c == ',' || c == '!' || c == '?' || c == ':') return true;
        }
        return false;
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("VANBAN.in"));
        TreeSet<String> ds = new TreeSet<>();
        while(sc.hasNextLine()){
            String s = sc.nextLine();
            String[] a = s.trim().split("\\s+");
            for(String x : a){
                if(chuaSo(x) && !check2(x)){
                    ds.add(x);
                }
            }
        }
        for(String x : ds){
            System.out.println(x);
        }
    }
}
/*
PTIT duy tri hoc phi nam 2019 va khong tang hoc phi
trong nam 2020, 2021 va 2021 den 2022.
PTIT da trich 6 ty d0ong ho tro moi si1nh vien 500000!
*/