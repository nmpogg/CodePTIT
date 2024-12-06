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
public class Bai1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        TreeSet<Integer> a = new TreeSet<>();
        HashSet<Integer> b = new HashSet<>();
        for(int i = 0; i < n; i++){
            int x = sc.nextInt();
            a.add(x);
        }
        for(int i = 0; i < m; i++){
            int x = sc.nextInt();
            b.add(x);
        }
        TreeSet<Integer> giao = new TreeSet<>(a);
        giao.retainAll(b);
        TreeSet<Integer> ba = new TreeSet<>(a);
        ba.removeAll(b);
        TreeSet<Integer> ab = new TreeSet<>(b);
        ab.removeAll(a);
        for(int x : giao){
            System.out.print(x + " ");
        }
        System.out.println("");
        for(int x : ba){
            System.out.print(x + " ");
        }
        System.out.println("");
        for(int x : ab){
            System.out.print(x + " ");
        }
    }
}
