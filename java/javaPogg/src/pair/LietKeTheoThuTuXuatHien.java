/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

import java.util.*;
import java.io.*;

public class LietKeTheoThuTuXuatHien {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        Scanner sc = new Scanner(new File("VANBAN.in"));
        ArrayList<String> ds = new ArrayList<>();
        HashSet<String> vb1 = new HashSet<>();
        while(sc.hasNext()){
            String s = sc.next().toLowerCase();
            vb1.add(s);
            ds.add(s);
        }
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        ArrayList<String> nhiphan = (ArrayList<String>) data.readObject();
        HashSet<String> vb2 = new HashSet<>();
        for(String s : nhiphan){
            vb2.add(s.toLowerCase());
        }
        for(String x : ds){
            if(vb1.contains(x) && vb2.contains(x)){
                System.out.println(x);
                vb1.remove(x);
                vb2.remove(x);
            }
        }
    }
}
