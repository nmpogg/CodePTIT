/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2;

/**
 *
 * @author Admin
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class WordSet{
    private ArrayList<String> danhSach;

    public WordSet() {
    }
    
    public WordSet(String s){
        String[] arr = s.split("\\s+");
        this.danhSach = new ArrayList<>();
        for(String x : arr){
            this.danhSach.add(x.toLowerCase());
        }
    }
    public WordSet union(WordSet other){
        TreeSet<String> set = new TreeSet<>();
        for(String x : this.danhSach){
            set.add(x);
        }
        for(String x : other.danhSach){
            set.add(x);
        }
        String tmp = "";
        for(String x : set){
            tmp += (x + " ");
        }
        return new WordSet(tmp.trim());
    }
    public WordSet intersection(WordSet other){
        TreeSet<String> ds = new TreeSet<>();
        for(String x : this.danhSach){
            for(String y : other.danhSach){
                if(x.equals(y)) ds.add(x);
            }
        }
        String ans = "";
        for(String x : ds){
            ans += x + " ";
        }
        return new WordSet(ans.trim());
    }
    @Override
    public String toString(){
        String res = "";
        for(String x : this.danhSach){
            res += x + " ";
        }
        return res.trim();
    }
}

public class Bai3 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
/*
Lap trinh huong doi tuong
Ngon ngu lap trinh C++
*/