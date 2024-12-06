/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2;

import java.util.*;

/**
 *
 * @author Admin
 */
class Pair<T, U>{
    private T first;
    private U second;

    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }
    @Override
    public String toString(){
        return "(" + first +"," + second + ")";
    }
}

public class Bai4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();
        int[][] a = new int[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = sc.nextInt();
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(a[i][j] == 1){
                    Pair<Integer, Integer> x = new Pair<>(i+1, j+1);
                    System.out.println(x);
                }
            }
        }
    }
}
