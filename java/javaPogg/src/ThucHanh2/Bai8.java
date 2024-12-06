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
import java.math.BigInteger;

public class Bai8 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int n = sc.nextInt();
        ArrayList<BigInteger> ds = new ArrayList<>();
        BigInteger sum = new BigInteger("0");
        for(int i = 0; i < n; i++){
            String s = sc.next();
            BigInteger x = new BigInteger(s);
            ds.add(x);
            sum = sum.add(x);
        }
        Collections.sort(ds);
        System.out.println(ds.get(0));
        System.out.println(ds.get(ds.size()-1));
        System.out.println(sum);
    }
}
