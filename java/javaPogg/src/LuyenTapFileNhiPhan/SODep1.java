/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LuyenTapFileNhiPhan;

import java.util.*;
import java.io.*;
public class SODep1 {
    public static boolean isValid(int n){
        
        String s = Integer.toString(n);
        if(s.length() < 2) return false;
        for(int i = 1; i < s.length(); i++){
            if(s.charAt(i) < s.charAt(i-1)) return false;
        }
        return true;
    }
    public static void main(String[] args) throws Exception{
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ds1 = (ArrayList<Integer>) data1.readObject();
        ArrayList<Integer> ds2 = (ArrayList<Integer>) data2.readObject();
        int[] cnt1 = new int[10001];
        int[] cnt2 = new int[10001];
        for(int x : ds1){
            if(isValid(x)) cnt1[x]++;
        }
        for(int x : ds2){
            if(isValid(x)) cnt2[x]++;
        }
        for(int i = 0; i <= 10000; i++){
            if(cnt1[i] > 0 && cnt2[i] > 0){
                System.out.println(i + " " + cnt1[i] + " " + cnt2[i]);
            }
        }
    }
}
