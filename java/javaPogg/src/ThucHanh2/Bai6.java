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

class SinhVien implements Comparable<SinhVien>{
    private String name;
    private int AC, submit;

    public SinhVien(String name, int AC, int submit) {
        this.name = name;
        this.AC = AC;
        this.submit = submit;
    }

    @Override
    public int compareTo(SinhVien o) {
        if(this.AC != o.AC) return o.AC - this.AC;
        else if(this.submit != o.submit) return this.submit - o.submit;
        return this.name.compareTo(o.name);
    }
    @Override
    public String toString(){
        return this.name + " " + this.AC + " " + this.submit;
    }
}

public class Bai6 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        int n = sc.nextInt();
        SinhVien[] ds = new SinhVien[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVien(sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(SinhVien x : ds){
            System.out.println(x);
        }
    }
}
