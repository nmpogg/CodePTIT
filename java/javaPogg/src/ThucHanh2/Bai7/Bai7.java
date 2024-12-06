/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2.Bai7;

/**
 *
 * @author Admin
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Bai7 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        ArrayList<MonHoc> ds = new ArrayList<>();
        HashSet<String> dsmaMH = new HashSet<>();
        while(sc.hasNextLine()){
            MonHoc x = new MonHoc(sc.nextLine(), sc.nextLine(), sc.nextLine());
            if(!dsmaMH.contains(x.getMaMH())) ds.add(x);
            dsmaMH.add(x.getMaMH());
        }
        Collections.sort(ds);
        for(MonHoc x : ds){
            System.out.println(x);
        }
    }
}
