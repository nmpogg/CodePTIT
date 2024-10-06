/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

import java.util.*;
import java.io.*;

class SinhVienLT implements Comparable<SinhVienLT>{
    private String name;
    private int AC, submit;

    public SinhVienLT(String name, int AC, int submit) {
        this.name = name;
        this.AC = AC;
        this.submit = submit;
    }
    @Override
    public int compareTo(SinhVienLT o) {
        if(this.AC != o.AC) return o.AC - this.AC;
        if(this.submit != o.submit) return this.submit - o.submit;
        return this.name.compareTo(o.name);
    }
    @Override
    public String toString(){
        return this.name + " " + this.AC + " " + this.submit;
    }
}

public class LuyenTapLapTrinh {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        int n = sc.nextInt();
        SinhVienLT[] ds = new SinhVienLT[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVienLT(sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(SinhVienLT x : ds){
            System.out.println(x);
        }
    }
}
/*
2
Nguyen Van Nam
168 600
Tran Thi Ngoc
168 600
*/