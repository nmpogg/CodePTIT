import java.util.*;
import java.io.*;

public class NguyenToVaThuanNghich {
    public static boolean checkTN(int n){
        String s = Integer.toString(n);
        for(int i = 0; i < s.length()/2; i++){
            if(s.charAt(i) != s.charAt(s.length()-i-1)) return false;
        }
        return true;
    }
    public static void main(String[] args) throws Exception {
        int[] prime = new int[10001];
        for(int i = 0; i <= 10000; i++) prime[i] = 1;
        prime[0] = prime[1] = 0;
        for(int i = 2; i <= 100; i++){
            if(prime[i] == 1){
                for(int j = i*i; j <= 10000; j += i){
                    prime[j] = 0;
                }
            }
        }
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> arr1 = (ArrayList<Integer>) data1.readObject();
        ArrayList<Integer> arr2 = (ArrayList<Integer>) data2.readObject();
        int[] freq1 = new int[10001];
        int[] freq2 = new int[10001];
        for(int x : arr1){
            freq1[x]++;
        }
        for(int x : arr2){
            freq2[x]++;
        }
        for(int i = 2; i <= 10000; i++){
            if(checkTN(i) && prime[i] == 1 && freq1[i] != 0 && freq2[i] != 0){
                System.out.println(i + " " + freq1[i] + " " + freq2[i]);
            }
        }
    }
}
