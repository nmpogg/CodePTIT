/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

import java.util.*;

public class LietKeVaDem {
    public static boolean check(String s){
        for(int i = 0; i < s.length()-1; i++){
            if(s.charAt(i) > s.charAt(i+1)) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> ds = new ArrayList<>();
        HashMap<String, Integer> map = new HashMap<>();
        while(sc.hasNext()){
            String x = sc.next();
            ds.add(x);
            if(map.containsKey(x)){
                map.put(x, map.get(x)+1);
            }
            else{
                map.put(x, 1);
            }
        }
        Collections.sort(ds, new Comparator<String>(){
            @Override
            public int compare(String t, String t1) {
                return map.get(t1) - map.get(t);
            }
            
        });
        for(String x : ds){
            if(map.get(x) != 0 && check(x)){
                System.out.println(x + " " + map.get(x));
                map.put(x, 0);
            }
        }
    }
}
/*

*/