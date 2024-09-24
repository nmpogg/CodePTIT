/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package MyPair;

import java.util.*;
import java.io.*;

public class LietKeCapSo1 {
    public static void main(String[] args) throws Exception{
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Pair> arr = (ArrayList<Pair>) data.readObject();
        
        HashSet<Pair> set = new HashSet<>();
        ArrayList<Pair> ans = new ArrayList<>();
        for(Pair x : arr){
            if(!set.isEmpty() && !set.contains(x) && x.getFirst() < x.getSecond()){
                ans.add(x);
                set.add(x);
            }
        }
        Collections.sort(ans);
        for(Pair x : ans){
            System.out.println(x);
        }
        
    }
}
