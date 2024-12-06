/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

import java.util.*;
import java.io.*;

/**
 *
 * @author Admin
 */
public class Bai1 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        long ans = 0;
        while(sc.hasNextLine()){
            String s = sc.nextLine();
            String[] a = s.split("\\s+");
            for(String x : a){
                try{
                    long n = Long.parseLong(x);
                    if(n > Integer.MAX_VALUE) ans += n;
                }
                catch(Exception e){}
            }
        }
        System.out.println(ans);
    }
}
