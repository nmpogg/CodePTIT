import java.util.*;
import java.io.*;

public class CapSoNguyenToTrongFile2 {
    public static int[] prime = new int[1000001];
    public static void sieve(){
        for(int i = 0; i <= 1000000; i++){
            prime[i] = 1;
        }
        prime[0] = prime[1] = 0;
        for(int i = 2; i <= 1000; i++){
            if(prime[i] == 1){
                for(int j = i * i; j <= 1000000; j += i){
                    prime[j] = 0;
                }
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        sieve();
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) data1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) data2.readObject();
        TreeSet<Integer> tset = new TreeSet<>(a);
        HashSet<Integer> set = new HashSet<>(b);
        for(int n : tset){
            if(n * 2 > 1000000) break;
            int m = 1000000 - n;
            if(n < m && prime[n] == 1 && prime[m] == 1 && tset.contains(m) && !set.contains(n)&& !set.contains(m)){
                System.out.println(n + " " + m);
            }
        }
    }
}
