/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2;

/**
 *
 * @author Admin
 */
import java.util.*;
import java.io.*;

public class Bai5 {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {  
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> ds = (ArrayList<String>) data.readObject();
        TreeSet<Integer> ans = new TreeSet<>();
        for(String dong : ds){
            String[] word = dong.trim().split("\\s+");
            for(String x : word){
                try{
                    Integer res = Integer.parseInt(x);
                    ans.add(res);
                }
                catch(Exception e){}
            }
        }
        for(int x : ans){
            System.out.println(x);
        }
    }
}
