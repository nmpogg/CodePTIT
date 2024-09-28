/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LuyenTapFileNhiPhan;

import java.util.*;
import java.io.*;
public class GhepMa {
    public static void main(String[] args) throws Exception {
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<String> ds1 = (ArrayList<String>) data1.readObject();
        ArrayList<Integer> ds2 = (ArrayList<Integer>) data2.readObject();
        TreeSet<String> set1 = new TreeSet<>();
        for(String x : ds1){
            set1.add(x);
        }
        TreeSet<Integer> set2 = new TreeSet<>();
        for(Integer x : ds2){
            set2.add(x);
        }
        TreeSet<String> ans = new TreeSet<>();
        String res = "";
        for(String x : set1){
            res = "";
            for(Integer y : set2){
                res = res + x + String.format("%03d", y);
                ans.add(res);
            }
        }
        for(String x : ans){
            System.out.println(ans);
        }
    }
}
