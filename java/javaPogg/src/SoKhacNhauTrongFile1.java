import java.util.*;
import java.io.*;

public class SoKhacNhauTrongFile1 {
    public static void main(String[] args) {
        try{
            File file = new File("DATA.in");
            Scanner sc = new Scanner(file);
            int freq[] = new int[1001];
            while(sc.hasNextInt()){
                freq[sc.nextInt()]++;
            }
            for(int i = 0; i <= 1000; i++){
                if(freq[i] > 0){
                    System.out.println(i + " " + freq[i]);
                }
            }
        } catch(Exception e){};
    }
}
