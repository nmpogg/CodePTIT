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

public class Bai2 {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a2 = (ArrayList<Integer>) data2.readObject();
        ArrayList<String> a1 = (ArrayList<String>) data1.readObject();
        TreeSet<String> s = new TreeSet<>(a1);
        TreeSet<Integer> t = new TreeSet<>(a2);
        for(String x : s){
            for(Integer y : t){
                System.out.println(x + String.format("%03d", y));
            }
        }
    }
}
