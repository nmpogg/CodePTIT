/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

/**
 *
 * @author Admin
 */
import java.util.*;
import java.io.*;


public class DocFileNhiPhan1 {
    public static boolean isPrime(int n){
        if(Integer.toString(n).length() < 3) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return n > 1;
    }
    public static void main(String[] args) throws Exception{
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
        ArrayList<Integer> ds = (ArrayList<Integer>) data.readObject();
        Collections.sort(ds);
        int[] f = new int[1000001];
        for(int x : ds){
            if(isPrime(x) && f[x] == 0){
                f[x] = 1;
                System.out.println(x);
            }
        }
    }
}
