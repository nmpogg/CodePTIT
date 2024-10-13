/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package donggoi;

import java.util.*;
import java.io.*;

class MaTrix{
    private int soHang, soCot;
    private int giaTri[][];

    public MaTrix() {
    }
    

    public MaTrix(int soHang, int soCot, int[][] giaTri) {
        this.soHang = soHang;
        this.soCot = soCot;
        this.giaTri = giaTri;
    }
    
    public void sapXepCot(int x){
        for(int i = 0; i < this.soHang-1; i++){
            for(int j = i+1; j < this.soHang; j++){
                if(giaTri[i][x-1] > giaTri[j][x-1]){
                    int res = giaTri[i][x-1];
                    giaTri[i][x-1] = giaTri[j][x-1];
                    giaTri[j][x-1] = res;
                }
            }
        }
    }
    public void tostring(){
        String ans = "";
        for(int i = 0; i < soHang; i++){
            for(int j = 0; j < soCot; j++){
                System.out.print(this.giaTri[i][j] + " ");
            }
            System.out.println("");
        }
    }
}

public class SapXepMaTran {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int x = sc.nextInt();
            int[][] a = new int[n][m];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = sc.nextInt();
                }
            }
            MaTrix mt = new MaTrix(n, m, a);
            mt.sapXepCot(x);
            mt.tostring();
        }
    }
}
