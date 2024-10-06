/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;
import java.util.*;
import java.io.*;

public class GiaTriNhiPhan {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> a = (ArrayList<String>) data.readObject();
        for(String x : a){
            String ans = "";
            for(char c : x.toCharArray()){
                if(c == '0' || c == '1') ans += c;
            }
            long tmp = Integer.parseInt(ans, 2);
            System.out.println(ans + " " + tmp);
        }
    }
}
